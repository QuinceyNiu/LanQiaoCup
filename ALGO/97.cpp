/*问题描述
　　编写一个程序，输入3个整数，然后程序将对这三个整数按照从大到小进行排列。
　　输入格式：输入只有一行，即三个整数，中间用空格隔开。
　　输出格式：输出只有一行，即排序后的结果。
　　输入输出样例
样例输入
9 2 30
样例输出
30 9 2*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[5];
	for(int i = 0; i < 3; i++)
		cin>>a[i];
	//sort函数第三个参数自己定义，实现从大到小
    sort(a, a+3);
	for(int i = 2; i >= 0; i--)
		cout<<a[i]<<" ";

	return 0;
}