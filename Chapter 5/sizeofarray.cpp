#include <iostream>
using namespace std;

//Divide the size of the array (in bytes) by the size of a single element (in bytes)
//to get the total number or elements in the array

int main() {
    int nums[] = {1, 3, 6, 2, 5};
    int numsSize = sizeof(nums)/sizeof(nums[0]);

    for (int index=0; index<numsSize; index++) {
        cout << nums[index] << endl;
    }

    return 0;
}

//Simpler implementation 
//Newer version of CPP

// for (int item:nums) {
//        cout << item << endl;

//}