#include <iostream>
using namespace std;
int a[25];
int vis[25];
int cnt=0;
int n, ans;

void fx(int t) {
    int i;
    if(t < 0) {
        int sum = 0, sumv = 0;
        for(i = 0; i < n; i++) {
            if(vis[i])
                sum += a[i];
            sumv += vis[i];
        }
        if(sum == ans && sumv) {
            for(i = 0; i < n; i++) {
                if(vis[i])
                    printf("%d ", a[i]);
                printf("\n");
                cnt++;
            }
        }
        return;
    }
    for(i = 0; i <= 1; i++) {
        vis[t] = i;
        fx(t-1);
    }
}

int main() {
    long ans;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    scanf("%ld", &ans);
    fx(n-1);
    printf("%d\n", cnt);
    return 0;
}