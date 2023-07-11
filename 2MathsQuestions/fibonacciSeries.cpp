#include <iostream>
using namespace std;

int main()
{
    cout << "Enter n :";
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a;
    cout << b;


    for (int i = 0; i < n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber <<" ";
        a=b;
        b=nextNumber;
    }
}
// 0 1 1 2 3 5 8 13