#include <iostream>
using namespace std;

int main (){
    cout<<"Enter the value of n : ";
    int n;
    cin >> n ;

    for (int i = 1; i < n; i++)
    {
        int count_1 = 1;
        int count_2 = i -1 ;
        
        for (int j = 1; j < n - i; j++)
        {
            cout<<"  ";
            
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<count_1<<" ";
            count_1++;
        }
        for (int  l = 1; l < i; l++) // took help from 2nd question
        {
            cout<<count_2<<" ";
            count_2--;
        }
        // for (int j = 1; j < n - i; j++)    // no need for this ----- baad me to space hi hota hai :)
        // {
        //     cout<<"  ";
            
        // }
        
        cout<<endl;
        
    }
    

}
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1