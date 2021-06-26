#include <iostream>
using namespace std;
int all = 0;
void solve(int x) {
    while(x) {
        if(x%10 == 2) {
            ++all;
        }
        x /= 10;
    }
}
int main() {
    for(int i = 1; i <= 2020; i++) {
        solve(i);
    }
    cout << all;
    return 0;
}