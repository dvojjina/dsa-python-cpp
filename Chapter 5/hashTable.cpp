#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Create a hash table that will match
// the English word to it's Spanish equivalent 
// It will then output the size of the table to the console

int main() {
    unordered_map<string, string> spnumbers = { {"one", "uno"}, {"two", "dos"} };

    spnumbers["three"] = "tres";
    spnumbers["four"] = "cuatro";

    cout << "one is ";
    cout << spnumbers["one"] << endl;

    cout << spnumbers.size() << endl;

    return 0;
}