#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void recursivefunction(int x , vector<string> &vec){
    if(x<=0) return ;
    vec.push_back("Coding Ninjas");
    recursivefunction(x-1, vec);
}

vector<string> printNTimes(int n){
	vector<string> vec;
	recursivefunction(n,vec);
	return vec;

}
int main()
{
    int n;
    cin>>n;
    vector<string> result;
    result = printNTimes(5);
    for(string value : result){
        cout<<value<<" ";
    }

    return 0;
}