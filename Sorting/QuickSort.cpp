#include <bits/stdc++.h>
using namespace std;


void swap ( int &i , int &j){
	int temp =i;
	i=j;
	j=temp;
}

int partitionArray(int arr[], int start, int end) {
	// Write your code here
	int pivot = arr[start];
	int i = start;
	int j = end;

	while(i<j){
		while(arr[i]<=pivot && i<= end -1){
			i++;
		}
		while(arr[j]>pivot&&j>=start+1){
			j--;
		}
		if(i<j) swap(arr[i] , arr[j]);
	}
	swap(arr[start] , arr[j]);
	return j ;
}

void QuickSort(int arr[], int start, int end) {
	if(start < end){
		int PIndex;
		PIndex = partitionArray(arr,start,end);
		QuickSort(arr,start, PIndex-1);
		QuickSort(arr, PIndex + 1, end);
	}
	
}
int main()
{
    int size;
    cout << "Enter the size of an Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cout<<"Enter Element number "<<i+1 <<": " ;
        cin >> arr[i];
        }
    QuickSort(arr, 0 , size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}