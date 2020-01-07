/*问题描述
　　从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
　　注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。*/

//attempt
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main() {
    string sixt;
    cin >> sixt;
    int len = sixt.length();
    long long ten=0;
    for(int i = len-1; i >=0; i--) {
        if(isdigit(sixt[i]))
            ten += (sixt[i]-'0') * pow(16, len-i-1);
        else
            ten+=(sixt[i]-'A'+10)*pow(16,len-1-i);
    }
    cout << ten << endl;
    return 0;
}