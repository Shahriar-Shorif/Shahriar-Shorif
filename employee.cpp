#include<bits/stdc++.h>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    int salary;
    void Insert(int Id, string n, int s)
    {
        id = Id;
        name = n;
        salary = s;
    }
    void Display()
    {
        cout<<id<<endl<<name<<endl<<salary<<endl;
    }
    void Input()
    {
    cin>>ID>>Name>>Salary;
    }
};

int main()
{
    int ID;
    string Name;
    int Salary;
    Employee.Input(ID,Name,Salary)
    Employee.Input();
    Employee myEm;
    myEm.Insert(ID,Name,Salary);
    myEm.Display();
    return 0;

}
