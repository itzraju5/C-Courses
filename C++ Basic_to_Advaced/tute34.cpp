#include <iostream>
using namespace std;

class Number
{
private:
    int a;
   
public:
 Number(Number  &obj)  
    {
        cout << "Copy Constructor called -------> ";
        a = obj.a;
    }   
    
    Number()
    {
        cout<<"WELCOME"<<endl;a = 0;
    }
    Number(int num)
    {
        cout<<"MOST WELCOME"<<endl;
        a = num;
    }

    // when no copy Constructor is found, compiler supplies its own copy constructor to each class
    
    void display()
    {
        cout << "The number for this object is: " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or x or y
    Number z1(x); // Copy constructor invoked
    z1.display();

    z2 = z;      // Copy constructor not called
    Number z3 = z; // Copy constructor invoked
    z3.display();
    

    return 0;
}
