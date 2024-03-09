#include <iostream>
#include <vector>

using namespace std;

vector<int> moveZeros(int n, vector<int> arr) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {0, 2, 0, 1, 0, 3, 4, 0, 5};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    arr = moveZeros(arr.size(), arr);

    cout << "Array after moving zeros to the end: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
