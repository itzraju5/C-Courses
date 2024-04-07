#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee()
    {
        
    }
};

// class {{derived-class-name}}: {{visibility-mode}} {{Base-class-name}}
// Default Visibility mode is private
// 1. Public Visibility Mode :--> Public members of the Base class becomes public members of the Derived class
// 2. Private Visibility Mode :--> Public members of the Base class becomes private members of the Derived class
// 3. Private members of the Base class will never becomes the member of the derived class That Means; Private Members are never inherited

class Programmer : public Employee
{
public:
    int languageCode;
    void getData()
    {
        cout << id << endl;
    }
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
};

int main()
{
    Employee harry(1), Rohan(2);
    cout << harry.salary << endl;
    cout << Rohan.salary << endl;
    Programmer skillF(10);

    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}