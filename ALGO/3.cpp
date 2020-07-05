/*
问题描述
如果一个自然数N的K进制表示中任意的相邻的两位都不是相邻的数字，那么我们就说这个数是K好数。求L位K进制数中K好数的数目。例如K = 4，L = 2的时候，所有K好数为11、13、20、22、30、31、33 共7个。由于这个数目很大，请你输出它对1000000007取模后的值。

输入格式
输入包含两个正整数，K和L。

输出格式
输出一个整数，表示答案对1000000007取模后的值。
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long l, num[500][500], sum = 0;
    int i, j, p, k;
    cin >> k >> l;

    for(i = 0; i < k; i++)
        num[i][1] = 1;

    for(j = 2; j <= l; j++) {
        for(i = 0; i < k; i++) {
            for(p = 0; p < k; p++) {
                if(abs(p-i) != 1) {
                    num[i][j] += num[p][j-1];
                    num[i][j] = num[i][j] % 1000000007;
                }
            }
        }
    }

    for(i = 1; i < k; i++) {
        sum += num[i][l];
        sum %= 1000000007;
    }

    cout << sum;

    return 0;
}