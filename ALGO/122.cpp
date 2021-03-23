#include <iostream>
using namespace std;
int func(int n, int m) {
    if(n < m) return 0;
    if(m == 0) return 1;
    return func(n-1, m) + func(n, m-1);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", func(n, m));
    return 0;
}