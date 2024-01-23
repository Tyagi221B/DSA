#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int start =1;
    for(int i=0; i<n;i++){
        if(i%2==0) start =1;
        else start =0;
        for(int j = 0; j<=i;j++){
            cout<<start;
            start = 1-start;    
        }
        cout<<endl;
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     bool x = true;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             // cout<<"*";
//             if (x)
//             {
//                 cout << 1 << " ";
//                 x = !x;
//             }
//             else if (!x)
//             {
//                 cout << 0 << " ";
//                 x = !x;
//             }
//         }
//         if (i % 2 == 0)
//         {
//             x = false;
//         }
//         else
//             x = true;

//         cout << endl;
//     }
//     return 0;
// }

