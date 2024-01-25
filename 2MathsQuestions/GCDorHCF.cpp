#include <iostream>
using namespace std;
int calcGCD(int n, int m){
    while (n!= 0 && m!=0){
        if(m>n) m = m%n;
        else n= n%m;
    }
    return max(n,m);
}
int main()
{
    int gcd_hcf = calcGCD(52,10);
    cout<<gcd_hcf;
    return 0;
}