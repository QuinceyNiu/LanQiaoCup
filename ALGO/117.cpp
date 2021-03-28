#include <iostream>
using namespace std;
int judge(int n);
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    if(judge(m)==n && judge(n) == m) {
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}

int judge(int n) {
    int sum = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    return sum;
}