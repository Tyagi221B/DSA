#include <iostream>
using namespace std;

void fibonacci(int i , int m ){
    int arr[m];
    arr[0]=0;
    arr[1]=1;
    arr[i] = arr[i] + arr[i-1];

    cout<<arr[i];
    if(i>m) return ;
    return fibonacci(i+1, m);
    



}
int main()
{
    int m = 5;
    fibonacci(2,m);   
    return 0;
}