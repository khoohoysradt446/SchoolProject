// C++ program to illustrate how to use the
// vector<int> class from the standard library

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // create a vector object
    vector<int> myVector;

    // insert elements in the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // traverse the vector using for loop
    for (auto i : myVector) {
        cout << i << endl;
    }

    return 0;
}
