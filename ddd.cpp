#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
public:
    Rectangle(int len)
    {
        length = len;
        breadth = len;
    }
public:
    int area()
    {
        cout<<length*breadth<<endl;
    }
};
int main()
{
    Rectangle r1 = Rectangle();
    r1.area();
    Rectangle r2 = Rectangle(5,7);
    r2.area();
    Rectangle r3 = Rectangle(9,5);
    r3.area();
    return 0;
}
