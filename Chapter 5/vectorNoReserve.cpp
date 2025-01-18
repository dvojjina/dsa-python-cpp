#include <iostream>
#include <vector>

using namespace std;

// a function that uses a vector to square every number from 0 to 49
// does not use reserve
// shows amount of space used

int main() {

    vector<int> intvector;

    for (int i = 0; i < 50; i++) {
        intvector.push_back(i * i);
        cout << intvector[i] << endl;
        cout << "capacity: " << intvector.capacity() << endl;
    }
    return 0;
}