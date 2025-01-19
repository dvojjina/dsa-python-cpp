#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    // Create two maps for translations
    unordered_map<string, string> engToSpan = {
        {"one", "uno"}, {"two", "dos"}, {"three", "tres"}, {"four", "cuatro"}
    };
    unordered_map<string, string> spanToEng = {
        {"uno", "one"}, {"dos", "two"}, {"tres", "three"}, {"cuatro", "four"}
    };

    string input;
    cout << "Enter an English or Spanish number (e.g., 'one' or 'uno'): ";
    cin >> input;

    // Check the input in both maps
    if (engToSpan.find(input) != engToSpan.end()) {
        // Input found in English-to-Spanish map
        cout << "The Spanish translation of '" << input << "' is '" << engToSpan[input] << "'." << endl;
    } else if (spanToEng.find(input) != spanToEng.end()) {
        // Input found in Spanish-to-English map
        cout << "The English translation of '" << input << "' is '" << spanToEng[input] << "'." << endl;
    } else {
        cout << "Translation not found!" << endl;
    }

    return 0;
}
