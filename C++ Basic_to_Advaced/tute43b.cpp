#include <iostream>
using namespace std;

class B
{
    int a;

public:
    void say()
    {
        cout << "Hello1" << endl;
    }
};
class D : public B
{
    int a;

public:
    void say()
    {                                                    //----->>>>    override Base class method
        cout << "Hello2" << endl;
    }
};

int main()
{
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}