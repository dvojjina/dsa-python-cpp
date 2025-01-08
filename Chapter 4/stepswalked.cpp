#include <iostream>
using namespace std;

void dogWalk(int steps) {
    for (int step = 0; step < steps; step++) {
        cout << "dog walked " << step << " steps!" << endl;
    
    }
}

int main() {
    dogWalk(11);

    return 0;
}