#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> reverseArray(int n, vector<int> &nums ,int index = 0)
{   
    if(index >=n/2) return nums;
    swap(nums[index] , nums[n-index-1]);

    reverseArray(n,nums, index + 1);
   
    return nums ;
}
int main(){
    vector<int> nums = {1,2,3,4,5};
    int n =5;
    vector<int> result;
    result = reverseArray(n , nums);
    for(int value :result ){
        cout<<value<<" ";
    }
}

