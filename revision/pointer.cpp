#include <iostream>
using namespace std;

int main (){

    struct Rectangle
    {
        int length;
        int breadth;
    };

// Pointer to structure , creating dyanamically , object created in heap and pointing there dynamically 
    Rectangle *r = new Rectangle ;
    r->length = 10;
    r->breadth = 56;

    cout<<r->length<<endl;
    cout<<r->breadth<<endl;
    delete r; // Free the dynamically allocated memory

}