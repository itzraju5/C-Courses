#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // Constructor declaration
   
    void printNumber()
    {
        cout << " your complex no. is :  " << a << " + " << b << "i" << endl;
        
    }
    
    
};

// It is used to initialize the objects of its class.

Complex::Complex(void)
{
    a = 0;
    b = 0;
    cout << "Hello World!" << endl;
}
int main()
{
    // Default constructor called automatically
    // when the object is created
    Complex c1, c2, c3,c4;

    c1.printNumber();
    cout << "Hello Raju" << endl;
    c2.printNumber();
    c3.printNumber();

    return 0;
}