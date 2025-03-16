#include <iostream>
#include <vector>

std::vector<int> zerosToEnd(std::vector<int> a) {
    
    int pos = 0;

    for (int i = 0; i < a.size(); i ++) {
        if (a[i] != 0) {
            a[pos++] = a[i];
        }
    }

    while (pos < a.size()) {
        a[pos++] = 0;
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