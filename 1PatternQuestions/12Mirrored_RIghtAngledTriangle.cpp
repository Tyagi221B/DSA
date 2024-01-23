#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1<<"  ";
        }
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " "<<"  ";
        }
        for (int l = 0; l < n - i - 1; l++)
        {
            cout << " "<<"  ";
        }
        for (int m = i + 1; m > 0; m--)
        {
            cout << m<<"  ";
        }

        cout << endl;
    }
    return 0;
}
// 1                                                  1  
// 1  2                                            2  1
// 1  2  3                                      3  2  1
// 1  2  3  4                                4  3  2  1
// 1  2  3  4  5                          5  4  3  2  1
// 1  2  3  4  5  6                    6  5  4  3  2  1
// 1  2  3  4  5  6  7              7  6  5  4  3  2  1
// 1  2  3  4  5  6  7  8        8  7  6  5  4  3  2  1
// 1  2  3  4  5  6  7  8  9  9  8  7  6  5  4  3  2  1 