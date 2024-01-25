// https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// time complexity =  O(n)

int sumOfAllDivisors(int n){
int sum = 0;
    for(int i=1 ; i<=n; i++){
        sum = sum + i* (n/i);
    }
    return sum;
}
//See the explanation of this , you have to observe the number of time the number is occuring on based of that the logic is designed . Like 1 is occuring evertime , if n  is 5 , then 1 will occur 5 times , 2 occurs 2 times ,3 occur 1 time , and 4 also 1 time and 5 also 1 time .

// time complexity =  O(n * sqrt(n))

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

// time complexity = O(n2)

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