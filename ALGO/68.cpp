#include <iostream>
using namespace std;
int main() {
    char n;
    cin >> n;
    if(isdigit(n))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    return 0;
}