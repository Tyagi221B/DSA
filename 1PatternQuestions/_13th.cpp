#include <iostream>
using namespace std;

void printDiamond(int n) {
        for (int i = 1; i<=n; i++){
            
            for(int j = 1 ; j<=n-i ; j++){
                cout<<" ";
            }
            for (int s = 1; s < i; s++)
            {
                cout<<"*";
            }            
            for(int k= 1 ; k<=i ; k++){
                cout<<"*";
            }
            
            cout<<endl;
        }
        for (int i = 1; i<=n; i++){
            
            for(int j = 1 ; j < i; j++){
                cout<<" ";
            }
            for (int s = 1; s <= n-i+1; s++)
            {
                cout<<"*";
            }            
            for(int k= 1 ; k <= n-i ; k++){
                cout<<"*";
            }
            
            
            cout<<endl;
        }
        for (int i = 1; i<=n; i++){
            
            for(int j = 1 ; j<=n-i ; j++){
                cout<<" ";
            }
            for (int s = 1; s < i; s++)
            {
                cout<<"*";
            }            
            for(int k= 1 ; k<=i ; k++){
                cout<<"*";
            }
            
            cout<<endl;
        }
	
        for (int i = 1; i<=n; i++){
            
            for(int j = 1 ; j < i; j++){
                cout<<" ";
            }
            for (int s = 1; s <= n-i+1; s++)
            {
                cout<<"*";
            }            
            for(int k= 1 ; k <= n-i ; k++){
                cout<<"*";
            }
            
            
            cout<<endl;
        }
    }

int main(){
    cout<<"Enter the value of n : ";
    int n;
    cin >>n ;
    printDiamond(n);
}