#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base Class variable Var_base = " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base Class variable Var_base " << var_base << endl;
        cout << "Displaying Derived Class variable Var_derived== " << var_derived << endl;
    }
};
int main()
{
    BaseClass *Base_class_pointer;
    BaseClass obj_base;

    DerivedClass obj_derived;
    Base_class_pointer = &obj_derived;   // Pointing base class pointer to derived class

        Base_class_pointer-> var_base = 34; 
        Base_class_pointer->display(); 
        // base_class_pointer->var_derived= 134; // Will throw an error
        Base_class_pointer-> var_base = 3400;
        Base_class_pointer->display();

     //----------------------------------------//

        DerivedClass *derived_class_pointer;
        derived_class_pointer = &obj_derived;

        derived_class_pointer->var_base = 9448;
        derived_class_pointer->var_derived = 98;
        derived_class_pointer->var_derived = 98;
        derived_class_pointer->display();

    return 0;
}