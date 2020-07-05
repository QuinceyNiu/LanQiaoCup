/*
问题描述
已知一个正整数N，问从1~N中任选出三个数，他们的最小公倍数最大可以为多少。

输入格式
输入一个正整数N。

输出格式
输出一个整数，表示你找到的最小公倍数。
*/

#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll ans=0;
    if(n==1){
        cout<<1<<endl;
    }else if(n==2){
        cout<<2<<endl;
    }else{
        if(n%2==1){
            cout<<n*(n-1)*(n-2)<<endl;
        }else{
            if(n%3){
                cout<<n*(n-1)*(n-3)<<endl;
            }else{
                cout<<(n-1)*(n-2)*(n-3)<<endl;
            }
        }
    }
    return 0;
}