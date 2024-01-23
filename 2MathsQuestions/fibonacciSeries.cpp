#include <iostream>
using namespace std;

void Fibonacci_method1(int n){
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i-1]+arr[i-2];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int main()
{
    int n=8;
    Fibonacci_method1(n);
}
// 0 1 1 2 3 5 8 13