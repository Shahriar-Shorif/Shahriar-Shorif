#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    string address;

    Student()
    {
        name = "Unknown";
        age = 0;
        address = "Not available";
    }
    void setInfo(string Name, int Age)
    {
        name = Name;
        age = Age;
    }
     void setInfo(string Name, int Age, string Add)
    {
        name = Name;
        age = Age;
        address = Add;
    }
    void Display()
    {
        cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Address : "<<address<<endl;
    }
};

int main()
{
    Student st1;
    Student st2;
    Student st3;
    Student st4;
    Student st5;
    Student st6;
    Student st7;
    Student st8;
    Student st9;
    Student st10;

    st1.setInfo("Shoriful Islam",23,"Panchlia");
    st1.Display();

    st2.setInfo("Shoriful Islam",23,"Panchlia");
    st2.Display();

    st3.setInfo("Shoriful Islam",23,"Panchlia");
    st3.Display();

    st4.setInfo("Shoriful Islam",23,"Panchlia");
    st4.Display();

    st5.setInfo("Shoriful Islam",23,"Panchlia");
    st5.Display();

    st6.setInfo("Shoriful Islam",23,"Panchlia");
    st6.Display();

    st7.setInfo("Shoriful Islam",23,"Panchlia");
    st7.Display();

    st8.setInfo("Shoriful Islam",23,"Panchlia");
    st8.Display();

    st9.setInfo("Shoriful Islam",23,"Panchlia");
    st9.Display();

    st10.setInfo("Shoriful Islam",23,"Panchlia");
    st10.Display();
    return 0;
}
