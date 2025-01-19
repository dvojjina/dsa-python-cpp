#include <iostream>
#include <string>
using namespace std;

// This function concatenates the string hello world
// Then the function will say where World begins in the concatenated string

int main(){
    string mystring1 = "Hello";
    string mystring2 = "World!";
    string mystring3;

    mystring3 = mystring1 + " " + mystring2;
    cout << mystring3 << endl;

    cout << mystring2 << " begins at ";
    cout << mystring3.find(mystring2) << endl;

    return 0;
}