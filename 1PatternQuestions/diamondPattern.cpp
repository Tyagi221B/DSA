#include <iostream>
using namespace std;

int main()
{
    int n = 8;

    for(int i = 0 ; i<n;i++){
        for(int j=1; j<n-i;j++){
            cout<<" ";
        }
        for(int k=0; k<=i;k++){
            cout<<"*";
        }
        for(int l = 0;l<i ;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i =0 ; i<n; i++){
        for(int j=0; j<i;j++){
            cout<<" ";
        }
        for(int k=0; k< n-i ; k++){
            cout<<"*";
        }
        for(int l =0; l< n-i-1 ; l++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


//        *
//       ***
//      *****
//     *******
//    *********
//   ***********
//  *************
// ***************
// ***************
//  *************
//   ***********
//    *********
//     *******
//      *****
//       ***
//        *