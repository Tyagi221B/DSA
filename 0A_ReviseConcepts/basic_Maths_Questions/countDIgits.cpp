#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = (int)(log10(n)+1);
    return count;
}
int main()
{
    int count = countDigits(7789);
    cout <<count;
    return 0;
}

//number of times a number is getting divided by 10 , is the number of digits that number has .