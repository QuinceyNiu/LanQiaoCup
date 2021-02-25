#include<iostream>
using namespace std;
int s1(int y)//判断润年平年
{
    int flag=0;
    if(y%400==0||y%100!=0&&y%4==0)
        flag=1;
    else flag=0;
    return flag;
}
int main()
{
    int a[12]={13,31,29,31,30,31,30,31,31,30,31,30};
    int b[12]={13,31,28,31,30,31,30,31,31,30,31,30};
    int year,i,sum=0,k=0;
    scanf("%d",&year);
    if(year<1998) return 0;
    for(i=1998;i<year;i++){
        if(s1(i))
            sum+=366;
        else sum+=365;
    }
    if(s1(year))
        for(i=0;i<12;i++){
            sum+=a[i];
            if((sum+3)%7==5)
                k++;
        }
    else for(i=0;i<12;i++){
            sum+=b[i];
            if((sum+3)%7==5)
                k++;
        }
    printf("%d",k);
    return 0;
}