/* 
问题描述
给定一个序列，每次询问序列中第l个数到第r个数中第K大的数是哪个。

输入格式
第一行包含一个数n，表示序列长度。

第二行包含n个正整数，表示给定的序列。

第三个包含一个正整数m，表示询问个数。

接下来m行，每行三个数l,r,K，表示询问序列从左往右第l个数到第r个数中，从大往小第K大的数是哪个。序列元素从1开始标号。

输出格式
总共输出m行，每行一个数，表示询问的答案。
*/

#include <iostream>
#include<stdio.h>
#include <algorithm>
#include<string.h>
#include<cstring>
#define ll long long
using namespace std;

int a[100005],b[100005];

int main()
{
    int n,m,l,r,k;
    while(~scanf("%d",&n))
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        while(m--)
        {
            int cnt=0;
            memcpy(b,a,sizeof(a));///每次查询都要改变数组的数据顺序，把b当作副本使用，每次结束复制回a的数据
            scanf("%d%d%d",&l,&r,&k);
            sort(b+l,b+r+1);
            for(int i=r;i>=l;i--)
            {
                cnt++;              ///描述错误之处，第k大，用数组排序
                                    ///如果相同的数，也直接跳过，算做另外一大，没有考虑相同的数才能ac
                if(cnt==k)
                {
                    printf("%d\n",b[i]);
                    break;
                }
            }
        }
    }
    return 0;
}