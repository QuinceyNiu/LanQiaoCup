/*问题描述
利用字母可以组成一些美丽的图形，下面给出了一个例子：

ABCDEFG

BABCDEF

CBABCDE

DCBABCD

EDCBABC

这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。

输入格式
输入一行，包含两个整数n和m，分别表示你要输出的图形的行数的列数。
输出格式
输出n行，每个m个字符，为你的图形。*/

//method1
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int i, j;
    char s[26][26];
    for(i=0; i<m; i++) {
        s[0][i] = 'A' + i;
    }
    for(i=1; i<n; i++) {
        s[i][0] = 'A' + i;
        for(j=1; j<m; j++) {
            s[i][j] = s[i-1][j-1];
        }
    }

    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            cout << s[i][j];
        }
        cout << "\n";
    }
    return 0;
}