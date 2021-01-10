/*
问题描述
　　给定某整数数组和某一整数b。要求删除数组中可以被b整除的所有元素，同时将该数组各元素按从小到大排序。如果数组元素数值在A到Z的ASCII之间，替换为对应字母。元素个数不超过100，b在1至100之间。
输入格式
　　第一行为数组元素个数和整数b
　　第二行为数组各个元素
输出格式
　　按照要求输出
样例输入
7 2
77 11 66 22 44 33 55
样例输出
11 33  55 M
*/
#include <iostream>
using namespace std;
int main() {
    int num, b;
    int k = 0; // 统计删除后列表元素的个数
    cin >> num >> b;
    int a[num], c[num];
    for(int i = 0; i < num; i++)
        cin >> a[i];
    for(int i = 0; i < num; i++) {
        if(a[i] % b != 0)
            c[k++] = a[i];
    }
    //冒泡排序升序
    for(int i=0; i < k-1; i++) {
        for(int j=0; j < k-1-i; j++) {
            if(c[j] > c[j+1]){
                int t = c[j];
                c[j] = c[j+1];
                c[j+1] = t;
            }
        }
    }
    
    for(int i=0; i < k; i++) {
        if(c[i] >= 65 && c[i] <= 90) 
            cout<<(char)('A'+(c[i]-65))<<" ";
        else
            cout << c[i] << " ";
    }
}