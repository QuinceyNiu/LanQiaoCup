/*问题描述
　　给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1<=n<=200
输入格式
　　第一行为一个整数n。
　　第二行包含n个整数，为待排序的数，每个整数的绝对值小于10000。
输出格式
　　输出一行，按从小到大的顺序输出排序后的数列。
样例输入*/

//attempt
#include <iostream>
#define N 200
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[N], temp;
    for(int i=0; i < n; i++) {
        cin >> a[i];
    }
    for(int i=0; i < n; i++)
        for(int j=i+1; j < n; j++)
            if(a[i] > a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
    for(int i=0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}