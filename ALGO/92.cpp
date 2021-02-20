#include <iostream>
using namespace std;
int main() {
    char s;
    int n, m;
    cin >> s;
    cin >> n >> m;
    if(s == '+') {
        cout << n + m << endl;
    }
    else if(s == '-') {
        cout << n - m << endl;
    }
    else if(s == '*') {
        cout << n * m << endl;
    }
    else if(s == '/') {
        cout << n / m << endl;
    }
    return 0;
}