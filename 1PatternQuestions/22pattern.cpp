#include <iostream>
using namespace std;

int main()
{
    int n= 4;
    for(int i = 0; i<n+3; i++){
        for(int j = 0 ; j<n+3;j++){
            if(i == 0 || j == 0 || i == n+2 || j == n+2 ){
                cout<<n<<" ";
            }
            else if(i == 1 || j==1 || i==n+1 ||j==n+1){
                cout<<n-1<<" ";
            }
            else if(i == 2 || j==2 || i==n||j==n){
                cout<<n-2<<" ";
            }
            else    
                cout<<"1 ";
        }
        cout<<endl;
    }
    return 0;
}