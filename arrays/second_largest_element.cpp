// find second largest element in an array

#include <iostream>
#include <vector>
#include <algorithm>

int secondLargestElement(std::vector<int> a) {

    // sort the array
    std::sort(a.begin(), a.end());

    // largest element will be at (n-1) after sorting
    int largest = a.back();

    // Traverse the array in reverse order and return the first element that is smaller than the largest
    for (int i = a.size() -2; i >= 0; i--) {
        if (a[i] < largest) {
            return a[i];
        }
    }

    return -1;

}

int main() {

    std::vector<int> a = {12,35,1,10,34,1};

    int res = secondLargestElement(a);

    std::cout << "Second largest element in the array: " << res << "\n";

    return 0;
}