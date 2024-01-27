#include <bits/stdc++.h>
using namespace std;

void recursiveFunction(int x, vector<int> &vec){
    if(x==0) return;

    recursiveFunction(x-1 , vec);
    vec.push_back(x);
}

vector<int> printNos(int x)
{
    vector<int> vec;

    recursiveFunction(x, vec);
    return vec;
}
int main()
{
    vector<int> result;
    result = printNos(5);
    for (int value : result)
    {
        cout << value << " ";
    }
    return 0;
}