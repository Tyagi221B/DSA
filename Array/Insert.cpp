#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 34, 32, 45, 32, 2, -1, -1, -1, -1};
    cout << "Enter the number you want to insert" << endl;
    int number;
    cin >> number;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == -1)
        {
            arr[i] = number;
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<"-"<<arr[i]<<endl;
    }

       
}