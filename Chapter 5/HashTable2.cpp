#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Creates a hash table that matches an English word to its Spanish equivalent
// Then it will output every item in the table to the console

// auto is used to automatically detect the data type when a variable is declared
// Use this ONLY when declaring complex variables

int main(){
    unordered_map<string, string> spnumbers;

    spnumbers = { {"one", "uno"}, {"two", "dos"}, {"three", "tres"}, {"four", "cuatro"}, {"five", "cinco"} };

    for (auto i = spnumbers.begin(); i!=spnumbers.end(); i++ ){

        cout << i->first << ":";
        cout << i->second << endl;

    }
}