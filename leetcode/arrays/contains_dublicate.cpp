/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

#include <iostream>
#include <vector>
#include <set>

bool contains_dublicate(std::vector<int> arr) {

    // declare a set
    std::set<int> s;

    for (int i = 0; i < arr.size(); i++) {
        s.insert(arr[i]);
    }

    if (s.size() == arr.size()) {
        return 1;
    } else {
        return 0;
    }

}

int main() {

    std::vector<int> arr = {1,2,3,1};

    bool res1 = contains_dublicate(arr);

    std::cout << res1 << "\n";

    // 

    std::vector<int> arr2 = {1,2,3,4};

    bool res2 = contains_dublicate(arr2);

    std::cout << res2 << "\n";

    return 0;
}