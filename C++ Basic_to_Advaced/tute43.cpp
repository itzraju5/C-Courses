#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;

    public:
        void greet()
        {
            Base2::greet();
            cout<<"Hey Raju"<<endl;
        }
};
int main()
{
    //  Base1 base1obj;
    //  Base2 base2obj;

    //  base1obj.greet(); // How are you
    //  base2obj.greet(); // Kaise ho

    //  Derived d;
     
    // d.Base2::greet();  // Kaise ho
    // d.Base1::greet();  // How are you

    // d.greet();  //  result in ambiguity

    Derived d;  
    d.Derived::greet();   

    return 0;
}