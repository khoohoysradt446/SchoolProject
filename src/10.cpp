#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int y = 3;
    if (x > y) {
        cout << "X is greater than Y." << endl;
    } else if (x < y) {
        cout << "Y is greater than X." << endl;
    } else {
        cout << "X and Y are equal." << endl;
    }
    return 0;
}
