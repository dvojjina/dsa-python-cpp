#include <iostream>
using namespace std;

//Shows the use of a null pointer to represent "nothing"

int main(){
    int x = 12345;
    int *ptrx = &x;

   cout << "Before loop" << endl;

    while (ptrx) {
        cout << "Pointer ptrx points to " << ptrx << endl;
        ptrx = nullptr;
}

    cout << "After loop" << endl;


    cout << "Pointer ptrx points to nothing!\n";
}