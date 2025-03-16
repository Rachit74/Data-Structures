#include <iostream>
#include <vector>

/*
we take the following approach
we first reverse the k number of elements 
then we reverse n-k number of elements
then we reverse the complete array to get the final result array
*/

std::vector<int> rotateArray(std::vector<int> a, int k){
    int n = a.size();

    // reverse the (n-k) to (n-1) part of the array

    int left = (n-k);
    int right = (n-1);

    while (left < right) {
        std::swap(a[left], a[right]);
        left++;
        right--;
    }

    // reverse the 0 to (n-k) -1 part of the array

    left = 0;
    right = (n-k) - 1;

    while (left < right) {
        std::swap(a[left], a[right]);
        left++;
        right--;
    }

    // reverse the complete array
    
    left = 0;
    right = (n-1);

    while (left < right) {
        std::swap(a[left], a[right]);
        left++;
        right--;
    }

    return a;
}

int main() {

    std::vector<int> a = {1,2,3,4,5};
    int k = 2;

    std::vector<int> res = rotateArray(a, k);

    for (int n: res) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}