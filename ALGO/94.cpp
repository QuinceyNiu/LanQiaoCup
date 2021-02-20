/* error: no matching function for call to 'strcmp'
#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;

struct tstudent {
    char name[21];
    char num[21];
    char sex;
};

void readdata(tstudent student[], int n){
    //输入N个学生的信息
    for(int i = 0; i < n; i++) {
        cin >> student[i].name >> student[i].num >> student[i].sex;
    }
}

int findstudent(tstudent student[], int n, char* data){
    //判断是否有某个学生的学号或名字等于data，如果有，函数返回该学生在student数组中的序号，否则返回-1
    if (data == NULL) return -1;
    for(int i = 0; i < n; i++) {
        if(strcmp(student[i].name == data))
            return i;
        else if(strcmp(student[i].num == data))
            return i;
        else 
            return -1;
    }
}

void solve(tstudent student[], int n, int m){
    char x[21], y[21];
    for (int i=0; i<m; i++) {
    //输入两个人的信息X、Y。通过调用findstudent函数判断这两个人能否成为舞伴
        cin >> x >> y;
        int a = findstudent(student, n, x);
        int b = findstudent(student, n, y);
        if(a != b && student[a].sex != student[b].sex)
            cout << "Y\n";
        else 
            cout << "N\n";
    }
}

int main(){
    int n, m;
    tstudent student[1010];

    cin>>n;

    readdata(student, n);
    cin>>m;
    solve(student, n, m);
}
*/

#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
struct node//每个学生的信息 
{
	char name[20];
	char id[10];
	char sex;
}stu[1000];
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>stu[i].name>>stu[i].id>>stu[i].sex;
	int m;
	cin>>m;
	char str1[20],str2[20];//姓名或者学号 
	while(m--)
	{
		cin>>str1>>str2;
		char ans1,ans2;//输入的姓名或者学号所对应的性别 
		if(str1[0]>='0'&&str1[0]<='9')//是学号 
			for(i=0;i<n;i++)
			{
				if(strcmp(str1,stu[i].id)==0)
				{
					ans1=stu[i].sex;//找到该学号对应的人的性别 
					break;
				}
			}
		else //是姓名 
			for(i=0;i<n;i++)
			{
				if(strcmp(str1,stu[i].name)==0)
				{
					ans1=stu[i].sex;//找到该姓名对应的人的性别 
					break;
				}
			}
	if(str2[0]>='0'&&str2[0]<='9')//是学号 
		for(i=0;i<n;i++)
		{
			if(strcmp(str2,stu[i].id)==0)
			{
				ans2=stu[i].sex;//找到该学号对应的人的性别 
				break;
			}
		}
	else //是姓名 
		for(i=0;i<n;i++)
		{
			if(strcmp(str2,stu[i].name)==0)
			{
				ans2=stu[i].sex;//找到该姓名对应的人的性别 
				break;
			}
		}
		if(ans1==ans2)//性别相同，不能共舞 
			cout<<"N"<<endl;
		else
			cout<<"Y"<<endl;
	}
    return 0;
}