#include <iostream>
using namespace std;

int main()
{
    cout << "Enter n :";
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int count = n - i;

        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        for (int l = 0; l < i * 2; l++)
        {
            cout << "* ";
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << count << " ";
            count--;
        }

        cout << endl;
    }
}
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1