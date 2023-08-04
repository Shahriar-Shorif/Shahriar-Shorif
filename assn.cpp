#include<bits/stdc++.h>
using namespace std;
class getDegree
{
public:
    getDegree()
    {
        cout<<"I got a degree"<<endl;
    }
};
class Undergraduate:public getDegree
    {
public:
    Undergraduate()
    {
        cout<<"I am an Udergraduate"<<endl;
    }
    };

class Postgraduate:public getDegree
    {
public:
    Postgraduate()
    {
        cout<<"I am a Postgraduate"<<endl;
    }

};
int main()
{
    Undergraduate u;
    Postgraduate p;
    return 0;
}
