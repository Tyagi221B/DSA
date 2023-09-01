#include <iostream>
using namespace std;


void printTriangle(int n) {
        for(int i = 1 ; i<=n ; i++)
        {
            for (int j = 1 ; j<=i; j++)
             {
            cout<<"* ";
              }
        cout<<endl;
        }
        
        for(int i = 1 ; i<n ; i++)
        {
            for (int j = 1 ; j<=n-i; j++)
              {
            cout<<"* ";
              }
        cout<<endl;
        }

    }

int main(){
    cout<<"Enter the value of n : ";
    int n;
    cin >>n ;
    printTriangle(n);
}    

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *