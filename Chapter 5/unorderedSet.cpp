#include <iostream>
#include <unordered_set>
using namespace std;

// A function that checks to see if a char is in the unordered set

void checker(unordered_set<char> set, char letter){
    if(set.find(letter) == set.end()) {
        cout << "letter " << letter << " is not in the set." << endl;
    }
    else{
        cout << "letter " << letter << " is in the set." << endl;
    }
}

int main(){
    unordered_set<char> charSet = {'d', 'c', 'b', 'a'};

    char letter = 'e';
    checker(charSet, letter);

    // Insert 'e' into the set and check using the function "checker" again

    charSet.insert('e');
    checker(charSet, letter);

    return 0;
}