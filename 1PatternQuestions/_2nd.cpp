#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 6;

    while (i < n){
    int j = 1;
    int counter = i;


        while(j<i+1){
            cout<<counter;
            counter--;
            j++;
        }
        cout<<endl;
        i++;
    }
}

// 1
// 21
// 321