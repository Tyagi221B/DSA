#include <iostream>
using namespace std;

bool checkPallindorom(int number){
    int originalNumber = number;
    int reversedNumber = 0;

    while(number > 0){
        int digit = number % 10;
        reversedNumber = (reversedNumber * 10 ) + digit ; 
        number/=10;
    }
    return (reversedNumber == originalNumber);
}

int main()
{
    int number = 24400;
    bool checkNumber = checkPallindorom (number);
    cout<<checkNumber;
    return 0;
}