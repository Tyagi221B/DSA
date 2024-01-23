#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {1, 8, 9, 0, 7, 8};
    // int arr[6] ;
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Enter the " << i << " input : ";
    //     cin >> arr[i];
    // }

    for (int i : arr)
    {
        cout << i << ", ";
    }
}