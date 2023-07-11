#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter n : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i; // Formula we achieved on pen and paper .
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}
// D
// CD
// BCD
// ABCD
