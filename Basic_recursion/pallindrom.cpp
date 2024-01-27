#include <iostream>
using namespace std;

bool check_Pallindrom(int i , string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return check_Pallindrom(i+1 , s);
}
int main()
{
    string s = "madam";
    cout << check_Pallindrom(0 , s);
    return 0;
}