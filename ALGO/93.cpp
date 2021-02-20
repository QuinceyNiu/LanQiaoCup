#include <iostream>
using namespace std;
int reverse(int a);
int main() {
    int n, m;
    cin >> n >> m;
    int sum = reverse(n) + reverse(m);
    //cout << reverse(1203);
    cout << reverse(sum) << endl;
    return 0;
}

int reverse(int a) {
    int s = 0; 
    do {                //对整数进行取倒置数
        s *= 10;
        s += a % 10;
    } while(a/=10);     //遇到零的情况就停止
    return s;
}