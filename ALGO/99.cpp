#include <iostream>
using namespace std;
int main() {
    int hour;
    float price, salary = 0; 
    scanf("%d %f", &hour, &price);
    if(hour <= 40) {
        salary = hour * price;
    } else if(hour <= 50) {
        salary = 40 * price + (hour-40)*1.5*price;
    } else if(hour > 50) {
        salary = 40 * price + 10 * 1.5 * price + (hour-50) * 2 * price;
    }

    printf("%.2f", salary);
    return 0;
}