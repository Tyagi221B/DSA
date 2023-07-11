#include <iostream>
using namespace std;

int main()
{
    cout << "This is Pattern";
    int i = 0;
    int count = 6;
    while (i < count)
    {
    int j = 6;

        while (j > 0)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}