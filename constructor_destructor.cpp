#include<bits/stdc++.h>
using namespace std;
class cube
{
public:
    double side;
    double volume()
    {
        return side*side*side;
    }
    cube(double side1)
    {
        cout<<"A Constructor is called"<<endl;
        side = side1;
    }
    cube()
    {
        cout<<"A default constructor is called"<<endl;
    }
    ~cube()
    {
        cout<<"Deconstructor is here: "<<side<<endl;
    }
};
int main()
{
	cube c1(2.34);
	cube c2;
	cout<<"\nThe side of the cube is: "<<c1.side<<endl;
	cout<<"\nThe volume of the first cube is: "<<c1.volume()<<endl;
	cout<<"\nThe length of the second cube: ";
	cin>>c2.side;
	cout<<"\nThe volume of second cube is : "<<c2.volume()<<endl;
	return 0;
}
