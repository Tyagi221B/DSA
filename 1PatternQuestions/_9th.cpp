#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value of n :";
    int n ;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            cout << " ";
        }
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// ****
//  ***
//   **
//    *
