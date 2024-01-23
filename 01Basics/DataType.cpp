#include <iostream>
using namespace std;

int main()
{
    // cout<<"Enter data type "<<endl;
    string typeInput;
    cin>> typeInput;

    if(typeInput == "Integer")
        cout<< sizeof(int);
    else if(typeInput == "Float")
        cout<< 4;
    else if(typeInput == "Long")
        cout<< 8;
    else if(typeInput == "Double")
        cout<< 8;
    else if(typeInput == "Character")
        cout<< 1;
    return 0;
}