#include <iostream>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int m = n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(j == 0)
                printf("*");
            else 
                printf(" *");
        }
        n--;
        printf("\n");
    }
    return 0;
}