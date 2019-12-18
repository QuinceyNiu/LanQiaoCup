/*问题描述
对于长度为5位的一个01串，每一位都可能是0或1，一共有32种可能。它们的前几个是：

00000

00001

00010

00011

00100

请按从小到大的顺序输出这32种01串。

输入格式
本试题没有输入。
输出格式
输出32行，按从小到大的顺序每行一个长度为5的01串。*/

//method1
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    for(a=0; a<2; ++a)
        for(b=0; b<2; ++b)
            for(c=0; c<2; ++c)
                for(d=0; d<2; ++d)
                    for(e=0; e<2; ++e)
                        cout << a << b << c << d << e << endl;
    return 0;
}

/*method2  --二进制计算
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int i,j;
  string str="00000";
  for(i=0;i<32;++i)     //外层循环控制着输出的次序
  {
    cout<<str<<endl;
    str[4]+=1;
    for(j=4;j>=0;--j)   //内层循环控制二进制的进位
    {
      if(str[j]=='2')
      {
        str[j-1]+=1;
        str[j]='0';
      }
    }
  }
  return 0;
}*/
