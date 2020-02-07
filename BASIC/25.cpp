/*问题描述
　　回形取数就是沿矩阵的边取数，若当前方向上无数可取或已经取过，则左转90度。一开始位于矩阵左上角，方向向下。
输入格式
　　输入第一行是两个不超过200的正整数m, n，表示矩阵的行和列。接下来m行每行n个整数，表示这个矩阵。
输出格式
　　输出只有一行，共mn个数，为输入矩阵回形取数得到的结果。数之间用一个空格分隔，行末不要有多余的空格。*/

//attempt
#include <iostream>
using namespace std;
int main() {
    int m, n, i, j, top, x, y;
    cin >> m >> n;
    int a[m][n];
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    top = 0; x = 0; y = 0;
    while(top < m*n) {
        while(x < m && a[x][y] != -1) {
            cout << a[x][y] << " ";
            a[x][y] = -1;
            top++;
            x++;
        }
        x--; y++;
        while(y<n&&a[x][y]!=-1)
        {
            cout<<a[x][y]<<" ";
            a[x][y]=-1;
            top++;
            y++;
        }
        x--; y--;
        while(x>=0&&a[x][y]!=-1)
        {
            cout<<a[x][y]<<" ";
            a[x][y]=-1;
            top++;
            x--;
        }
        x++;y--;
        while(y>=0&&a[x][y]!=-1)
        {
            cout<<a[x][y]<<" ";
            a[x][y]=-1; 
            top++;
            y--;
        }
        x++;y++;
    }
    return 0;
}