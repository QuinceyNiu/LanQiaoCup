#include<stdio.h>
int alpha(long long int x){
    if(x<10)
        return x;
    else{
        long n = 1;
        while(x){
            if(x%10 != 0){
                n *= x%10;
                x /= 10;
            }
            else
                x /= 10;
        }
        return alpha(n);
    }
}
int main(){
    long long int x;
    scanf("%ld",&x);
    printf("%d",alpha(x));
    return 0;
}