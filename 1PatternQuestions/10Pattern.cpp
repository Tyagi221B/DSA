#include <iostream>
using namespace std;

int main()
{
    int n=4;
    for (int i = 1; i <= 2 * n - 1; i++) {
    int stars = i;
    if (i > n) 
        stars = 2 * n - i;
    for (int j = 1; j <= stars; j++) {
        cout << "*";
    }
    cout << endl;
}
    return 0;
}


// void nStarTriangle(int n) {
//    for(int i = 1 ; i<=n ; i++)
//         {
//             for (int j = 1 ; j<=i; j++)
//              {
//             cout<<"*";
//               }
//         cout<<endl;
//         }
        
//         for(int i = 1 ; i<n ; i++)
//         {
//             for (int j = 1 ; j<=n-i; j++)
//               {
//             cout<<"*";
//               }
//         cout<<endl;
//         }
// }