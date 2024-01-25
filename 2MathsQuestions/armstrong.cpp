#include <iostream>
using namespace std;
bool check_Armstrong(int number){
    int sum = 0;
    int original_value = number;
    while(number>0){
        int digit = number % 10;
        sum = sum + (digit*digit*digit);
        number /=10;
    }
    return (sum == original_value);
}
int main()
{
    bool check = check_Armstrong(371);
    cout<<check;
    return 0;
}