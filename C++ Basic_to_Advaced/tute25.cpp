#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setId()
    {
        salary = 122;
        cout << " enter the Id of the employee " << endl;
        cin >> Id;
    }
    void getId()
    {
        cout << " the Id of the employee is: " << Id << endl;
    }
};

int main(void)
{
    // Employee ram, mohan, sohan, shyam;
    // ram.setId();
    // ram.getId();

    // Employee fb[100];
    // fb[0].setId();
    // fb[0].getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}