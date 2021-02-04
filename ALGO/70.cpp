#include <iostream>
using namespace std;
int main() {
    string s[5];
    int max = 0, index = 0;
    for(int i = 0; i < 5; i++) {
        cin >> s[i];
        if(s[i].length() > max) {
            max = s[i].length();
            index = i;
        }
    }
    cout << s[index] << endl;
    return 0;
}