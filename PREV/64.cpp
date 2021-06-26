#include <iostream>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("%.2lf", sum / n);
    return 0;
}