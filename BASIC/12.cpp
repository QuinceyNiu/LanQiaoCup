/*问题描述
　　给定n个十六进制正整数，输出它们对应的八进制数。

输入格式
　　输入的第一行为一个正整数n （1<=n<=10）。
　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。

输出格式
　　输出n行，每行为输入对应的八进制正整数。

　　【注意】
　　输入的十六进制数不会有前导0，比如012A。
　　输出的八进制数也不能有前导0。*/

//attempt1
/*复杂版
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
char str[1000005], er[4000020], ch[4]; //str数组储存输入的十六进制数 er储存对应的二进制数 ch是一个临时数组
int b[1000005];
int main()
{
    char a[17] = "0123456789ABCDEF";
    int  t;
    cin >> t;
    while (t--)
    {
        int i = 0, len;
        memset(str, 0, sizeof(str));
        cin >> str;
        len = strlen(str);
        if (str[0] == '0')//如果输入只有一个0
            cout << '0' << endl;
        else
        {
            for (int j = 0; j<len; j++)
            {
                for (int k = 0; k < 18; k++)
                {
                    if (str[j] == a[k])
                    {
                        int temp, kk = 0, flag = 0;
                        while (k)//将十六进制数转换为二进制数
                        {
                            ch[kk++] = a[k % 2];//这里是将十六进制数的每一位数字转换成长度为四的二进制数
                            k /= 2;
                            flag = 1;
                        }
                        if (flag == 0)//特殊处理0，将0转换为二进制数
                        {
                            for (int j = 0; j < 4; j++)
                                ch[j] = '0';
                        }

                        temp = kk % 4;
                        if (temp != 0)//补零
                        {
                            for (int j = 1; j <= 4 - temp; j++)
                                ch[kk++] = '0';
                        }
                        for (int j = 3; j >= 0; j--)
                        {
                            er[i++] = ch[j];
                        }
                        break;
                    }
                }
            }

            //在二进制转换为八进制之前，要将二进制数中的前导零去掉
            int f, temp = 0;
            while (er[0] == '0')
            {
                for (int j = 0; j < i; j++)
                {
                    er[j] = er[j + 1];
                }
                temp++;
            }
            i = i - temp;
            f = i % 3;
            //如果二进制数的长度不是3的整数，要在二进制数前补0
            if (f != 0)
            {
                for (int j = i + 1; j >= 3-f; j--)//数组整体后移3-f个位置
                    er[j] = er[j - 3 + f];
                for (int j = 0; j < 3 - f; j++)
                    er[j] = '0';
                i = i + 3 - f;
            }
            int w = 0;
            //以下是将二进制数转换为八进制数
            //一个八进制数等于三个二进制数
            for (int j = 0; j <i; j = j + 3)//注意j的初值是否正确
            {
                int sum = 0;
                for (int q = 0; q<3; q++)
                {
                    sum = sum + (er[j + q] - '0') * pow(2, 3 - q - 1);
                }
                b[w++] = sum;
            }
            for (int h = 0; h < w; h++)
            {
                if (b[0] == 0)
                    continue;
                cout << b[h];
            }
            cout << endl;
        }
    }
}*/

//attempt2
//简化版
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int k=1; k <= n; k++) {
        string s1, s2;
        cin >> s1;
        s2 = "";
        for(int i=0; i < s1.length(); i++) {
            switch (s1[i])
            {
                case '0':s2+="0000";break;
                case '1':s2+="0001";break;
                case '2':s2+="0010";break;
                case '3':s2+="0011";break;
                case '4':s2+="0100";break;
                case '5':s2+="0101";break;
                case '6':s2+="0110";break;
                case '7':s2+="0111";break;
                case '8':s2+="1000";break;
                case '9':s2+="1001";break;
                case 'A':s2+="1010";break;
                case 'B':s2+="1011";break;
                case 'C':s2+="1100";break;
                case 'D':s2+="1101";break;
                case 'E':s2+="1110";break;
                case 'F':s2+="1111";break;
                default:break;
            }
        }
        int len=s2.length();
        if(len%3==1)//三个二进制为一位八进制，二进制串前面补0，确保二进制串的长度为3的倍数
            s2="00"+s2;
        else if(len%3==2)
            s2="0"+s2;
        int flag=0;
        for(int i=0;i<=s2.length()-3;i+=3)
        {
            int num=4*(s2[i]-'0')+2*(s2[i+1]-'0')+(s2[i+2]-'0');
            if(num)
                flag=1;//忽略前导0
            if(flag)
                cout<<num;
        }
        cout<<endl;
    }
    return 0;
}
