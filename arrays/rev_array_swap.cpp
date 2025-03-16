#include <iostream>
#include <vector>

using namespace std;

/*
in this method we simply keep track of left most and right most element of the list
and keep them swapping until left < right
*/

vector<int> reverseArray(vector<int> a) {
    int left = 0;
    int right = a.size() - 1;

    while (left < right)
    {
        swap(a[left], a[right]);

        left++;
        right--;
    }
    
    return a;

}

int main() {
    vector<int> a = {1,2,3,4,5,6,7};

    vector<int> res = reverseArray(a);

    for (int num: res) {
        cout << num << " ";
    }
    cout << endl;

}