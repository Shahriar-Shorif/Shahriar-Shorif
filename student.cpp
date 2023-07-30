#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    string phone;
    string email;
    int id;
    void Insert(string n, string ph, string em, int i)
    {
        name = n;
        phone = ph;
        email = em;
        id = i;
    }
    void Display()
    {
        cout<<"NAME : "<<name<<endl<<"PHONE : "<<phone<<endl<<"EMAIL : "<<email<<endl<<"ID : "<<id<<endl;
    }
};
int main()
{
    string Name;
    string Phone;
    string Email;
    int Id;
    cout<<"Enter your Name: "<<endl;
    getline(cin,Name);
    cout<<"Enter your Phone: "<<endl;
    cin>>Phone;
    cout<<"Enter your Email: "<<endl;
    cin>>Email;
    cout<<"Enter your ID: "<<endl;
    cin>>Id;
    Student obj;
    obj.Insert(Name,Phone,Email,Id);
    obj.Display();

    return 0;
}
