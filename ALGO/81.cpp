#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cin >> n;
    int *p = new int[n]; //声明一个动态数组
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        sum += p[i];
    }
    cout << sum << " " << sum/n << endl;

    return 0;
}