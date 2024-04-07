#include <bits/stdc++.h>
using namespace std;

class Complex
{
int a, b;
    //  friend int calculator::sumRealComplex(Complex o1, Complex o2);
     friend class calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << " your no. is :  " << a << " + " << b << "i" << endl;
    }
};

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex o1, Complex o2)
    {
        return (o1.a + o2.a);
    }
};

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator sum;
    int res = sum.sumRealComplex(o1, o2);
    cout << res;
    return 0;
}