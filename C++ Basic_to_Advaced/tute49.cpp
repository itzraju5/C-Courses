#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    // Test(int i, int j) : a(i), b(j)              //---->  a = 4   b = 6
    // Test(int i, int j) : a(i), b(i + j)          //---->  a = 4   b = 10
    // Test(int i, int j) : a(i), b(2 * j)          //---->  a = 4   b = 12
    // Test(int i, int j) : a(i), b(a + j)            //---->  a = 4   b = 10
    Test(int i, int j) : b(j), a(i + b)            //a = 4201023  b = 6 --> Because a will initialise first
    {
        cout<<"Constructor exeucated"<<endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}