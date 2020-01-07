/*问题描述
杨辉三角形又称Pascal三角形，它的第i+1行是(a+b)i的展开式的系数。

　　
它的一个重要性质是：三角形中的每个数字等于它两肩上的数字相加。

　　
下面给出了杨辉三角形的前4行：

　　
   1

　　
  1 1

　　
 1 2 1

　　
1 3 3 1

　　
给出n，输出它的前n行。

输入格式
输入包含一个数n。

输出格式
输出杨辉三角形的前n行。每一行从这一行的第一个数开始依次输出，中间使用一个空格分隔。请不要在前面输出多余的空格。*/

//attempt1
#include <iostream>
using namespace std;

int main() {
    int a[35][35];
    int n, i, j;
    cin >> n;

    a[0][0] = 1;
    a[1][0] = 1;
    a[1][1] = 1;
    for(i = 2; i < n; i++) {
        for(j=0; j <= i; j++) {
            if(j == 0) {
                a[i][j] = 1;
                continue;
            }
            if(i == j) {
                a[i][j] = 1;
                continue;
            }
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}