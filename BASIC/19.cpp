/*问题描述
　　回文串，是一种特殊的字符串，它从左往右读和从右往左读是一样的。小龙龙认为回文串才是完美的。现在给你一个串，它不一定是回文的，请你计算最少的交换次数使得该串变成一个完美的回文串。
　　交换的定义是：交换两个相邻的字符
　　例如mamad
　　第一次交换 ad : mamda
　　第二次交换 md : madma
　　第三次交换 ma : madam (回文！完美！)
输入格式
　　第一行是一个整数N，表示接下来的字符串的长度(N <= 8000)
　　第二行是一个字符串，长度为N.只包含小写字母
输出格式
　　如果可能，输出最少的交换次数。
　　否则输出Impossible*/

//attempt1 succeed
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    int i, j, k, l, n, cnt=0, flag=0;
    string a;
    cin >> n >> a;
    l = n - 1;
    for(i = 0; i < l; i++) {
        for(j = l; j >= i; j--) {
            if(i == j) {
                if(n % 2 == 0 || flag == 1) {
                    cout << "impossible";
                    return 0;
                }
                flag = 1;
                cnt += n / 2 - i;
            }
            else if (a[i] == a[j]) {
                for (k = j; k < l; k++) {
                    swap(a[k], a[k + 1]);
                    cnt++;
                }
                l--;
                break;
            }
        }
    }
    cout << cnt;
}*/

// attempt2
#include<iostream>
using namespace std;
int flag=0;
int main()
{
    int i,j,n,ans=0;
    string a;
    cin>>n>>a;
    for (i=0;i<n;i++)
    {
        for (j=n-1;j>=i;j--)  //必须要j==i 
        {
            if (i==j) //没找到能和a[i]对称的字符 
            {
                if (a.size()%2==0||flag==1)
                {
                    cout<<"Impossible";
                    return 0;
                }
                flag++;
                ans+=a.size()/2-i;
            }
            else if (a[i]==a[j])  //找到了 
            {
                for (int k=j;k<n-1;k++)
                swap(a[k],a[k+1]);
                ans+=n-1-j;
                n--;
                //此时第一个和最后一个字符对称 
                break;
                //该字符已对称，后面的循环不再考虑最后一个字符 
            }
        }
    }
    cout<<ans; 
}