/*问题描述
  Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。
  输入格式
  输入包含一个整数n。
  输出格式
  输出一行，包含一个整数，表示Fn除以10007的余数。*/
#include <iostream>
using namespace std;
int main()
{
    unsigned long s=0,f1=1,f2=1,f3=1,n=0;
    cin >> n;
     
     if(n>2)
    for(s=3;s<=n;s++)
    {
         f3=(f2+f1)%10007;
         f1=f2;
         f2=f3;
     }
 
     cout << f3 << endl;
     return 0;
 }