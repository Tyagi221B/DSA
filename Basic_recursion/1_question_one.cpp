#include <iostream>
#include <bits/stdc++.h>


using namespace std;

// Recursive function to generate a vector of integers from 1 to x
void recursiveFunction(int x, vector<int>& ans) {
    if (x == 0) {
        return;
    }
    
    // Call recursive function
    recursiveFunction(x - 1, ans);
    
    // Insert element in the vector
    ans.push_back(x);
}

// Function to generate a vector of integers from 1 to x
vector<int> printNos(int x) {
    // Declaring an empty integer vector
    vector<int> ans;
    
    // Calling recursive function
    recursiveFunction(x, ans);
    
    return ans;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Calling the printNos function to generate the vector
    vector<int> result = printNos(n);

    // Displaying the generated vector
    cout << "Generated vector: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
