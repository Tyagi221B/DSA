#include <iostream>
using namespace std;

int calSum(int n, int sum = 0)
{
    if (n == 0)
        return 0;
    return n + calSum(n - 1);
}
int main()
{
    int sum = calSum(3);
    cout << sum;
    return 0;
}