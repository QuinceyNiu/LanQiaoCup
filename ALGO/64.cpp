#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    if(a >= 'A' && a <= 'Z')
        cout << "upper" << endl;
    else 
        cout << "lower" << endl;

    return 0;
}