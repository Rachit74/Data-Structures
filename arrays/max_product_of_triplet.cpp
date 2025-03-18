#include <iostream>
#include <vector>
#include <algorithm>


/*
sort the array
calculate and return the max of two max products
*/

int maxProductTriplet(std::vector<int> arr) {
    int n = arr.size();

    if (n < 3) {
        std::cerr << "Array should have atleast 3 elements";
    }

    std::sort(arr.begin(), arr.end());

    // case 1 (max 1) product of 3 largest numbers
    int max1 = arr[n-1] * arr[n-2] * arr[n-3];

    // case 2 (max 2) product of 2 smallest and the largest number
    int max2 = arr[0] * arr[1] * arr[n-1];

    return std::max(max1, max2);

}

int main() {
    std::vector<int> arr = {-10, -3, -5, -6, -20};

    int res = maxProductTriplet(arr);

    std::cout << res << "\n";

}