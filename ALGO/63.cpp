#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, j;
    for(i = 1; i < 10; i++) {
        for(j = 1; j < i; j++) {
            cout << i << "*" << j << "=" << i*j << " "; 
        }
        if(i == j) {
            cout << i << "*" << j << "=" << i*j << endl;
        }
    }

    return 0;
}

/*#include <iostream>
using namespace std;
int main() {
    int i, j;
    for(i = 1; i < 10; i++) {
        for(j = 1; j < i; j++) {
            printf("%d*%d=%d ", i, j, i*j); 
        }
        if(i == j) {
            printf("%d*%d=%d\n", i, j, i*j);
        }
    }

    return 0;
}*/