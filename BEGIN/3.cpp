/*问题描述
给定圆的半径r，求圆的面积。
输入格式
输入包含一个整数r，表示圆的半径。
输出格式
输出一行，包含一个实数，四舍五入保留小数点后7位，表示圆的面积。*/

//attempt1
#include <iostream>
#include <iomanip>
#include <cmath>
#define PI atan(1.0) * 4
using namespace std;
int main() {
    int r;
    cin >> r;
    double s;
    s = PI * r * r;
    //setprecision(n)与setiosflags(ios::fixed)合用，可以控制小数点右边的数字个数
    cout << setiosflags(ios::fixed) << setprecision(7);
    cout << s << endl;

    return 0;
}