#include <iostream>
#include <vector>

std::vector<int> zerosToEnd(std::vector<int> a) {
    
    // find elements who are zero and remove them, increasing the zeros_count

    int zeros_count = 0;

    for (int i = 0; i < a.size(); i ++) {
        if (a[i] == 0) {
            a[i] = a[i + 1];
            a.erase(a.begin() + i);
            zeros_count++;
        } else {
            continue;
        }
    }

    // append the zeros at the end

    for (int i = 0; i < zeros_count; i++) {
        a.push_back(0);
    }

    return a;
}

int main() {
    std::vector<int> a = {1,2,0,3,0,4,5};

    std::vector<int> res = zerosToEnd(a);

    for (int n : res) {
        std::cout << n << " ";
    };
    std::cout << "\n";

    return 0;
}