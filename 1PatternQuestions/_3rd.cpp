#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int i = 0;
    while (i <= n)
    {
        char ch = 65; //'A'
        ch = ch + i;

        int j = 0;
        while (j <= i)
        {
            cout << ch << " ";
            j = j + 1;
            ch = ch + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
// A
// B C
// C D E
// D E F G
// E F G H I