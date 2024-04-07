#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int Id;
    static int count;

public:
    void setData()
    {
        cout << " Enter the Id " << endl;
        cin >> Id;
        count++;
    }
    void getData()
    {
        cout << " the Id of this employee is " << Id << " and this is employee no. " << count << endl;
    }

     static void getcount()
    {
        //  cout << Id;--->  throws an error
        cout << " the value of count is " << count << endl;
    }
};

int Employee :: count = 1000;
int main()
{
    Employee harry, rohan, ram;

    harry.setData();
    harry.getData();
    Employee::getcount();

    rohan.setData();
    rohan.getData();
    Employee::getcount();

    ram.setData();
    ram.getData();
    Employee::getcount();

    return 0;
}
