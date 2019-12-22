/*问题描述
给出一个包含n个整数的数列，问整数a在数列中的第一次出现是第几个。

输入格式
第一行包含一个整数n。

第二行包含n个非负整数，为给定的数列，数列中的每个数都不大于10000。

第三行包含一个整数a，为待查找的数。

输出格式
如果a在数列中出现了，输出它第一次出现的位置(位置从1开始编号)，否则输出-1。*/

//attempt1
#include <iostream>
#define N 1001
using namespace std;
int main() {
    int n;
    cin >> n;
    int b[N];
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }
    int a;
    cin >> a;
    int result=0;
    for(int i=0; i<n; i++) {
        if(a==b[i]) {
            result = i+1;
            break;
        }
        else
            result = -1;
    }
    cout << result << endl;

    return 0;
}