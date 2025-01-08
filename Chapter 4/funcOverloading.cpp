#include <iostream>
using namespace std;

//demonstates how function overloading works,
//by changing the parameters on the inputs

void myfunc(int n) {
    cout << "1 parameter: " << n << endl;

}

void myfunc(int n, int m) {
    cout << "2 parameters: " << n;
    cout << " and " << m << endl;

}

int main() {

    myfunc(4);
    myfunc(5, 6);
    myfunc(100);

    return 0;
}