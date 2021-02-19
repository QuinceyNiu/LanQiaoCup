#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n, num, max = 0, a[21], b[21];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    cin >> n;
    if(n <= 0) return 0;
    int f = 0;
    b[0] = 1;
    cin >> a[0];
    for(int i = 1; i < n; i++) {
        cin >> num;
        if(num == a[f]) 
            b[f]++;
        else {
            a[++f] = num;
            b[f] = 1;
        }
    }
    int x = 0;
    for(int i = 0; i <= f; i++) {
        if(b[i] > max) {
            max = b[i];
            x = i;
        }
    }
    cout << a[x];
    return 0;
}

/* failed method
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 21
int main() {
    int n;
    cin >> n;
    int a[MAX];
    int b[MAX];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = 1;
    }
    for(int j = 0; j < n; j++) {
        if(b[j] == 1) {
            for(int k = j + 1; k < n; k++) {
                if(a[j] == a[k]) {
                    b[j]++;
                    b[k] = b[j];
                }
            }
        }
    }
    int cnt = b[0];
    int max = a[0];
    for(int kk = 1; kk < n; kk++) {
        if(b[kk] > cnt) {
            cnt = b[kk];
            max = b[kk];
        }
    }
    cout << max << endl;
    return 0;
}*/