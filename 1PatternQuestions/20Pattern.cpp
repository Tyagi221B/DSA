#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    for(int i=0 ; i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        for(int space = 0;space < (2*(n-i))-2  ; space++){
            cout<<"  ";
        }
        for(int j=i;j>=0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i =0; i<n-1;i++){
        for(int j=0; j<n-1-i;j++){
            cout<<"* ";
        }
        for(int space=0; space < (2*i)+2 ; space++){
            cout<<"  ";
        }
        for(int j=0;j<n-1-i;j++){
            cout<<"* ";
        }

        cout<<endl;

    }
    return 0;
}