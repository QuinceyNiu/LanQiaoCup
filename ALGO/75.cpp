#include <iostream>
using namespace std;
int main()
{
    int n,i,m=3,member=0;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        member=(member+m)%i;
    }
    cout<<member+1<<endl;//最后结果编号加1
    return 0;
}