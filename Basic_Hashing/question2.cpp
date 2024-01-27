#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    // Initializing variables to determine
    // maximum frequency and minimum frequency elemen
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    // Traverse through map to find the elements.
    for (auto it : map)
    {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq)
        {
            // Found an element with frequency maximum among 
            // all elements found till now
            maxEle = element;
            maxFreq = count;
        }
        else if (count == maxFreq)
        {
            // Checking if the current element is smaller or not
            maxEle = min(maxEle, element);
        }

        if (count < minFreq)
        {
            // Found an element with frequency maximum among 
            // all elements found till now
            minEle = element;
            minFreq = count;
        }
        else if (count == minFreq)
        {
            // Checking if the current element is smaller or not
            minEle = min(minEle, element);
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}