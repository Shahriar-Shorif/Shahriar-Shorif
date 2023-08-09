#include<bits/stdc++.h>
using namespace std;
class Box
{
public:
    Box(double len, double b, double h)
    {
        float volume = len*b*h;
        cout<<"The volume of Box is: "<<volume<<endl;
    }
};
int main()
{
	float l,b,h;
	cout<<"Enter length: ";
	cin>>l;
	cout<<"Enter Base: ";
	cin>>b;
	cout<<"Enter height: ";
	cin>>h;
	Box b1(l,b,h);
	return 0;
}
