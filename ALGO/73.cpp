#include <iostream>
using namespace std;
int main() {
    string s;
    int count=0;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(isdigit(s[i])) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}