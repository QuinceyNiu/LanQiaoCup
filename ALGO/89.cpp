#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string a, b;
    char c;
    getline(cin, a);
    cin >> c;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != c) {
            b += a[i];
        }
    }
    cout << b;

    return 0;
}