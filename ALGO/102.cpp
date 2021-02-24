//method1
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i * j == n) {
                printf("%d * %d = %d\n", i, j, n);
            }
        }
    }
    return 0;
}
*/

//method2
#include <iostream>
using namespace std;

int main()
{
    int n,i ;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d * %d = %d\n",i,n/i,n);
        }
    }
    return 0;
}