#include <iostream>
using namespace std;
#define MAX 10000
int num[MAX];
int main() {
    num[0] = 1;
    int n, i, k, c, x;
    cin >> n;
    for(i = 2; i <= n; i++) {
        x = 0;
        for(k = 0; k < MAX; k++) {
            c = num[k] * i;
            num[k] = (c + x) % 10;
            x = (c + x) / 10;
        }
    }
    i = MAX - 1;
    while(num[i] == 0)
        i--;
    for(k = 0; k < MAX; k++) {
        if(num[k] != 0) {
            cout << num[k] << endl;
            break;
        }
    }
    return 0;
}