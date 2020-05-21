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