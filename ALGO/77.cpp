#include <iostream>
using namespace std;
int main() {
    int x1, x2, y1, y2, k;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 - x2 == 0)
        cout << "INF" << endl;
    else {
        k = (y2-y1) / (x2-x1);
        cout << k << endl;
    }
    return 0;
}