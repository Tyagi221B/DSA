#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i) + 1; k++)
        {
            if(k<((2*i)+1)/2) cout<<ch++;
            else cout<<ch--;
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}