/*问题描述
给定一个年份，判断这一年是不是闰年。

当以下情况之一满足时，这一年是闰年：

1. 年份是4的倍数而不是100的倍数；

2. 年份是400的倍数。

其他的年份都不是闰年。

输入格式
输入包含一个整数y，表示当前的年份。
输出格式
输出一行，如果给定的年份是闰年，则输出yes，否则输出no。*/

//attempt1
#include <iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    if((year%4==0&&year%100!=0)||year%400==0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}