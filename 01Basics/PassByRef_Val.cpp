#include <iostream>
using namespace std;
int Maximum(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}
void Swap(int &x, int &y)
{
	int temp = x;
	x=y;
	y=temp;
}
int main()
{
	int challengeNumber , param1 , param2 ,result;
	cin>>challengeNumber;
	cin>>param1>>param2;
        switch (challengeNumber) {
        case 1:
               result = Maximum(param1, param2);
                cout << result;
                break;
        case 2:
                Swap(param1, param2);
                cout << param1 << " " << param2;
                break;
        }
        return 0;
}