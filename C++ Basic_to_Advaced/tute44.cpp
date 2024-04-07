
#include <iostream>
using namespace std;
  
class A {
public:
    void show()
    {
        cout << "Hello form A \n";
    }
};
  
class B : virtual public A {
};
  
class C : virtual public A {
};
  
class D : public B, public C {
    
};
  
int main()
{
    B object;
    object.show();

    C object1;
    object1.show();

    D object2;
    object2.show();    

    return 0;
}