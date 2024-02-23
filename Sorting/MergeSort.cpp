#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr , int low , int mid , int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;

    }
    while(right<=high){
        temp.push_back(arr[right]);
            right++;

    }
    for(int i=low ; i<=high ; i++){
        arr[i] = temp[i-low];
    }
}
void mergeSort(vector<int> &vec, int low, int high) {
    if(low>=high) return;

    int mid = (low+high)/2;
    mergeSort(vec, low,mid);
    mergeSort(vec, mid+1, high);
    merge(vec , low , mid , high);

}
int main(){
    vector<int> vec = {34 , 89 , 23 ,21 ,22 , 3 , 2 , 2};
    cout<<"MergeSort Starts .."<<endl;
    mergeSort(vec , 0 , 7 );
    for(int i : vec){
        cout<<i<<" ";
    }
}