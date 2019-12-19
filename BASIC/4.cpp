/*问题描述
给出n个数，找出这n个数的最大值，最小值，和。

输入格式
第一行为整数n，表示数的个数。

第二行有n个数，为给定的n个数，每个数的绝对值都小于10000。

输出格式
输出三行，每行一个整数。第一行表示这些数中的最大值，第二行表示这些数中的最小值，第三行表示这些数的和。*/

//method1
#include <iostream>
#define N 10000
using namespace std;
int main() {
    int n, i, a[N], max, min, s=0;
    cin >> n;
    for(i=0; i<n; i++) {
        cin >> a[i];
        s += a[i];
    }
    max = a[0];
    min = a[0];
    for(i=1; i<n; i++) {
        if(a[i]>max) {
            max = a[i];
        }
        if(a[i]<min) {
            min = a[i];
        }
    }
    cout << max << endl << min << endl << s;

    return 0;
}