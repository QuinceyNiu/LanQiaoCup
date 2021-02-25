#include <iostream>
using namespace std;

string str = "aeiou";

int main() {
    string s;
    cin >> s;
    int len = s.length();

    for(int i=0; i < len; i++) {
        for(int j = 0; j < 5; j++) {
            if(s[i] == str[j]) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}