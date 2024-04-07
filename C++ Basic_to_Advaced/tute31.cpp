#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << " your complex no. is :  " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c3;
    c3.printNumber();
    
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    return 0;
}