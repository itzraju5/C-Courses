#include <iostream>
using namespace std;
class Base
{
protected:
    int a;
private:
    int b;

};


class Derived : public Base{

};

int main()
{
    Base b;
    Derived d;
    // cout<<b.a; // will not work since a is protected in both Base as well as Derived class.
    // cout<<d.a;
    return 0;
}