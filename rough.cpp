#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> UnionOfTwoArrays(const vector<int>& arr1, const vector<int>& arr2) {
    set<int> mySet;
    vector<int> result;

    // Insert elements from arr1 and arr2 into the set to eliminate duplicates
    for (int num : arr1) {
        mySet.insert(num);
    }
    for (int num : arr2) {
        mySet.insert(num);
    }

    // Copy unique elements from the set into the result vector
    for (int num : mySet) {
        result.push_back(num);
    }

    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {2, 3, 4, 5, 6};

    vector<int> result = UnionOfTwoArrays(arr1, arr2);

    // Print the result
    cout << "Union of two arrays:";
    for (int num : result) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
