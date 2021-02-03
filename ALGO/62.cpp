#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, m;
    cin >> a >> m;
    int result;
    result = a*a % m;
    cout << result;

    return 0;
}