/*问题描述
　　1221是一个非常特殊的数，它从左边读和从右边读是一样的，编程求所有这样的四位十进制数。
输出格式
　　按从小到大的顺序输出满足条件的四位十进制数。*/

//attempt
#include <iostream>
using namespace std;
int main() {
    int number;
    int a, b, c, d;
    int sum;
    for(number=1000; number < 10000; number++) {
        a = number/1000;
        b = number/100%10;
        c = number/10%10;
        d = number%10;
        if(a==d && b==c) {
            cout << number << endl;
        }
    }
    return 0;
}