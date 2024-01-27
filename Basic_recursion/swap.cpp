#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void reverse_an_array(int i , int arr[] , int n){
    if(i>=n/2 ) return ;
    swap(arr[i] , arr[n-i-1]);
    reverse_an_array(i+1 , arr , n);
}

int main()
{
    int n ;
    cin >>n;
    int arr[n];
    for(int i = 0; i<n ; i++) {
        cin>>arr[i];
    } 
    reverse_an_array(0 , arr , n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}