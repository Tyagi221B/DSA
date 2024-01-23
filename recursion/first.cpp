#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else if (n > 1)
        return fact(n - 1) * n;
    else
        return n;
}

int main()
{
    int n = 3;
    int answer ;
    answer = fact(n);
    cout << "Factorial of " << n << " is: " << answer << endl;

    return 0;
}
