#include <iostream>
using namespace std;
int main() {
    int i;
    cin >> i;
    if(i >= 90)
        cout << "A" << endl;
    else if(i >= 80)
        cout << "B" << endl;
    else if(i >= 70)
        cout << "C" << endl;
    else if(i >= 60)
        cout << "D" << endl;
    else
        cout << "E" << endl;
    
    return 0;
}