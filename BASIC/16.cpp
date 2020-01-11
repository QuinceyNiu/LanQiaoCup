/*问题描述
　　求出区间[a,b]中所有整数的质因数分解。
输入格式
　　输入两个整数a，b。
输出格式
　　每行输出一个数的分解，形如k=a1*a2*a3...(a1<=a2<=a3...，k也是从小到大的)*/

//attempt
#include<iostream>  
#include<cmath>  
using namespace std;
int main()  
{  
    long int b,i,k,m,n;  
    cin >> m >> n;
    for(i = m;i<=n;i++)  
    {  
        cout << i << "=";  
        b = i;k = 2;  
        while(k<=sqrt(i))  
        {  
            if(b%k==0)  
            {  
                b = b/k;  
                if(b>1)  
                {  
                    cout << k << "*";continue;  
                }     
                if(b==1) 
                    cout << k << "\n";  
            }  
            k++;  
        }  
        if(b>1&&b<i) 
            cout << b << "\n";  
        if(b==i)  
        {    
            cout << i << "\n";
        }       
    }  
    return 0;  
} 