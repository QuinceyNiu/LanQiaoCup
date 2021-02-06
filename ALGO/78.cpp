#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[101];
    cin >> s;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}