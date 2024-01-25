#include <iostream>
using namespace std;

int countDigits(int number){
    int originalNumber = number;
    int counter = 0;
    while(number>0){
        int digit = number%10;

        if(digit !=0 && originalNumber % digit ==0 ){
            counter ++;}

        number/=10;
    }
    return counter;
}
int main()
{
    int number = 660;
    int counter = countDigits(number);
    cout<<counter;
    return 0;
}