#include <iostream>

using namespace std;

int main(){
    int a = 10 ;
    int &x = a;
    int *p;
    int *q;
    p = &a;
    q= &x;
    cout<<*p<<endl<<*q<<endl;
    cout<<a<<endl<<x;
    
}