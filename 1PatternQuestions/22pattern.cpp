#include <iostream>
using namespace std;

// initially subtract eveything from 4 ;
void getNumberPattern(int n) {
 for(int i=0;i<2*n-1;i++){
     for(int j=0;j<2*n-1;j++){
         int top = i;
         int left =j;
         int right= (2*n-2)-j;
         int down = (2*n-2)-i;
         cout<<(n-min(min(top,down),min(right,left)));
     }
     cout<<endl;
 }
}

int main()
{
    getNumberPattern(4);
    return 0;
}