#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p)
{
    p->length = 60;
    p->breadth = 50;
}

int main()
{
    struct Rectangle r;
    fun(&r);

    cout << r.length << endl
         << r.breadth;
}