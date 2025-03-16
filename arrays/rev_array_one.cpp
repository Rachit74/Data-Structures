#include <iostream>
#include <vector>

using namespace std;

/*
Traverse the primary array from end to start and 
keep pusing each element into a new array to form a reversed array of primary array
*/

vector<int> reverseArray(vector<int> a) {
    vector<int> b;

    for (int i = a.size() - 1; i >= 0; i--) {
        b.push_back(a[i]);
    }

    return b;
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> rev_arr = reverseArray(a);

    // Print reversed array
    for (int num : rev_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0; // Add return statement in main()
}
