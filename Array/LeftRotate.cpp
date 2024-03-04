#include <iostream>
using namespace std;


void rotateArray(vector<int> &arr, int k) {
    int n = arr.size();
    k%=n;
    reverse(arr.begin() , arr.begin()+k);
    //arr.begin()+k   <= this is the last index which is excluded in the iteration
    reverse(arr.begin()+k , arr.end());
    reverse(arr.begin() , arr.end());
}

int main()
{
    vector<int> vec = {1,2,3,4,5};
    int k = 2;
    rotateArray(vec , k);
    for(int i:vec){
        cout<<i;
    }
    
}
