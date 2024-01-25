#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n){
int sum = 0;
    for(int i=1 ; i<=n;i++){
        sum = sum + i* (n/i);
    }
    return sum;
}

int sum_of_Divisior(int n ){
    int sum = 0;
    for(int i=1 ; i<=n;i++){
        for (int j=1; j<=i; j++){
            if(i%j==0){
                sum =sum + j;
            }
        }
    }
    return sum;
}
int sum_of_Divisior2(int n ){
    int sum = 0;
    for(int i=1 ; i<=n;i++){
        int sqroot = sqrt(i);
        for (int j=1; j<=sqroot; j++){
            if(i%j==0){
                sum =sum + j;
                if(j!=i/j)
                    sum = sum + i/j;
                
            }
            
        }
    }
    return sum;
}
int main()
{
    int n=10;
    int sum1 = sumOfAllDivisors(n);
    int sum2 = sum_of_Divisior2(n);
    int sum3 = sum_of_Divisior(n);
    cout<<sum1<<endl;
    cout<<sum3<<endl;
    cout<<sum2;
    return 0;
}