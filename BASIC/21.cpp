#include<iostream>
using namespace std;
int main(){
    	void PrintAn(int);
    	void PrintSn(int);
    	int n;
    	cin>>n;
    	PrintSn(n);
    	return 0;
}
void PrintAn(int n){
    for(int i=1;i<=n;i++)
    {
    	cout<<"sin("<<i;
    	if(i!=n)
    	{
    		if(i%2!=0)
    		cout<<"-";
    		else
    		cout<<"+";
    	}
    	else
    	{
    		for(int j=1;j<=n;j++)
    			cout<<")";
    	}
    }
}
void PrintSn(int n)
{
    for(int i=1;i<n;i++)
    	cout<<"(";
    for(int i=1;i<=n;i++)
    {
    	if(i!=n)
    	{
    		PrintAn(i);
    		cout<<"+"<<n-i+1<<")";
    	}
    	else
    	{
    		PrintAn(i);
    		cout<<"+"<<n-i+1<<endl;
    	} 
    }
}