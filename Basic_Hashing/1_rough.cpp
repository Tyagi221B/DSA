#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2,2,6,8,6,2,2,3,9,0};
    // int find[3] = {2,6,5};

    int hash[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        if (hash[arr[i]] == 0)
        {
            hash[arr[i]] = 1;
        }
        else if(hash[arr[i]] != 0){
            hash[arr[i]]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i<< " -> "<< hash[i] << " "<< endl;
    }

    return 0;
}