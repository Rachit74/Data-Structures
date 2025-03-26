#include <iostream>
#include <vector>

int missing_number(std::vector<int> arr) {
    int n = arr.size();
    int expected_sum = (n * (n + 1)) / 2;
    int actual_sum = 0;
    
    for (int num : arr) {
        actual_sum += num;
    }

    return expected_sum - actual_sum;
}

int main() {
    std::vector<int> arr = {0, 1, 3};
    int res = missing_number(arr);
    std::cout << res;
    return 0;
}
