#include <iostream>
#define MAX 12
using namespace std;
int main() {
    int a[MAX];
    for(int i = 0; i < 11; i++) {
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    for(int i = 0; i < 11; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }

    cout << max << " " << min << endl;

    return 0;
}
