#include <iostream>
using namespace std;

int main (){
    int n = 4;
    char ch = 65;
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column <=row ; column++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
}

// A
// BC 
// DEF 