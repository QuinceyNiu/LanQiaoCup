#include <iostream>
#define MAX 300
using namespace std;
int main() {
    int m, s, n, i, j, k;
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    cin >> m >> s >> n;
    for(i = 0; i < m; i++) {
        for(j = 0; j < s; j++) {
            cin >> a[i][j];
        }
    }
    for(i = 0; i < s; i++) {
        for(j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < s; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}