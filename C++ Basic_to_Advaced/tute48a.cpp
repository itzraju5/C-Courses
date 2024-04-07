#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1()
    {
        data1 = 1;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1()
    {
        cout << "Value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2()
    {
        data2 = 2;
        cout << "Base2 class constructor called" << endl;
    }
    void printDataBase2()
    {
        cout << "Value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{

};

int main()
{
    Derived harry;
    harry.printDataBase1();
    harry.printDataBase2();
    return 0;
}