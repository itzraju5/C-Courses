#include <iostream>
using namespace std;
int count = 0; // global variable
class num
{

public:
    num()
    {
        count++;
        cout << "This is the time where constructor is called for object no : " << count << endl;
    }
    ~num()
    {
        cout << "this is the time when my destructor is called for object no:" << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside our main function" << endl;
    cout << "Creating 1st object n1" << endl;
    num n1;

    {
        cout<<"Entering this block"<<endl;
        cout << "Creating 2 more object" << endl;
        num n2, n3;

        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}
