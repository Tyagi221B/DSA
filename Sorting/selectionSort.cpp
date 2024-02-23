#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int &a ,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n = arr.size();
    // cout<<n;
    for(int i = 0; i<=n-2;i++){
        int mini = i;
        for(int j=i; j<=n-1;j++){
            
            if(arr[j]<arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }

}
int main()
{
    // int n = 7;
    vector<int> vec = {23, 3, 45, 6, 4, 20, 2};
    selectionSort(vec);
    for(int i : vec){
        cout<< i <<" ";
    }

    return 0;
}