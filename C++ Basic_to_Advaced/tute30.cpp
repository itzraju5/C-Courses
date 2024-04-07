#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int , int);  // Constructor Declaration

    void printNumber()
    {
        cout << " your complex no. is :  " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y) //  Here Parameterized constructor as takes 2 parameters  
{
    a = x;
    b = y;
}
int main()
{
    // implicit call
    Complex a(4,6);

    // explicit call
    Complex b = Complex (5,7);

    a.printNumber();

    b.printNumber();

    return 0;
}