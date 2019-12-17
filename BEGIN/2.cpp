/*问题描述
求1+2+3+...+n的值。
输入格式
输入包括一个整数n。
输出格式
输出一行，包括一个整数，表示1+2+3+...+n的值。*/

//attempt1 error
/*#include <iostream>
using namespace std;

int main() {
    int n, s=0;
    cin >> n;
    for(int i=1; i <= n; i++) {
        s += i;
    }
    cout << s;

    return 0;
}*/

//attempt2
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    cout << (N+1)*N/2;

    return 0;
}