#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
int main() {
    char s[32];
    stringstream str;
    cin >> s;
    int a;
    int i = strlen(s) - 1;
    int c = 1;
    long long sum = 0;
    while(i >= 0) {
        str << s[i];
        str >> a;
        sum = sum + a * c;
        c *= 2;
        i--;
        str.clear(); 
    }
    cout << sum;
    return 0;
}