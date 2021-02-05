#include <iostream>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int length = s1.length() < s2.length() ? s1.length() : s2.length();
    for(int i = 0; i < length; i++) {
        if(s1[i] != s2[i]) {
            cout << s1[i] - s2[i] << endl;
            return 0;
        }
        else {
            continue;
        }
    }
    cout << "0" << endl;
    return 0;
}