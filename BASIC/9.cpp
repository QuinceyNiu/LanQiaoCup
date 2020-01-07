/*问题描述
　　123321是一个非常特殊的数，它从左边读和从右边读是一样的。
　　输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n 。
输入格式
　　输入一行，包含一个正整数n。
输出格式
　　按从小到大的顺序输出满足条件的整数，每个整数占一行。*/

//attempt
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int number;
    int a, b, c, d, e;
    int f, g, h, i, j, k;
    int sum;
    for(number=10000; number < 100000; number++) {
        a = number/10000;
        b = number/1000%10;
        c = number/100%10;
        d = number/10%10;
        e = number%10;
        if(a==e && b==d && n == a+b+c+d+e) {
            cout << number << endl;
        }
    }
    for(number=100000; number < 1000000; number++) {
        f = number/100000;
        g = number/10000%10;
        h = number/1000%10;
        i = number/100%10;
        j = number/10%10;
        k = number%10;
        if(f==k && g==j && h==i && n == f+g+h+i+j+k) {
            cout << number << endl;
        }
    }
    return 0;
}