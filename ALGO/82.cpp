#include <iostream>
#include <cstring>
using namespace std;
char g[60][60];
int main() {
    memset(g, '.', sizeof(g));
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        g[i][i] = 'A' + i;
    for(int i = 0; i < n; i++)
        g[i][n-1] = 'A' + i;
    for(int i = 0, j = 2 * n - 2; i < n; j--, i++)
        g[i][j] = 'A' + i;
    for(int i = 0; i < n; i++)
        g[n-1][i] = 'A' + i;
    for(int i = 0, j = 2 * n - 2; i < n; j--, i++)
        g[n-1][j] = 'A' + i;
    for(int i = 0, j = 2 * n - 2; i < n; j--, i++)
        g[j][i] = 'A' + i;
    for(int i = 0, j = 2 * n - 2; i < n; j--, i++)
        g[j][n-1] = 'A' + i;
    for(int i = 0, j = 2 * n - 2; i < n; j--, i++)
        g[j][j] = 'A' + i;
    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j < 2 * n - 1; j++) {
            cout << g[i][j];
        }
        cout << endl;
    }
    return 0;
}

// reference: https://cnblogs.com/zbx2000/p/12780906.html