// find the second largest element in array using one pass search

#include <iostream>
#include <vector>

/*

start with

largest = -1
second_largest = -1

traverse the array

if arr[i] > largest, then update the second_largest with largest and largest with arr[i]

if arr[i] < largest and arr[i] > second_largest, then update second_largest with arr[i]

return second_largest when traversal ends

*/

int secondLargestElement(std::vector<int> arr) {

    int largest = -1;
    int second_largest = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
        
    }

    return second_largest;
}

int main() {
    
    std::vector<int> a = {12,35,1,10,34,1};

    int res = secondLargestElement(a);

    std::cout << "Second largest element in the array: " << res << "\n";


    return 0;
}