#include <iostream>
using namespace std;

int main()
{
    int n=4;
    // cout << "Enter the value of n: ";
    // cin >> n;
    int count1 = n;

    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int count = n;
        

        if (i < (2 * n) / 2)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << count;
                count--;
            }
            for (int k = 0; k < 5-(2*i); k++)
            {
                cout << count1;
            }
            for (int  m = 0; m <= i; m++)
            {
                
                cout<<count+1;
                count++;
            }
            
        }
       
        else
        {
            for (int j = 0; j < (2 * n) - i - 1; j++)
            {
                cout << count;
                count--;
            }
        }
         count1--;
        // for (int s = 1; s < i; s++)
        // {
        //     cout<<"*";
        // }
        // for(int k= 1 ; k<=i ; k++){
        //     cout<<"*";
        // }

        cout << endl;
    }
}