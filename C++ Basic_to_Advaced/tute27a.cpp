#include <bits/stdc++.h>
using namespace std;
// Forward Declaration
class Complex ;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};
class Complex
{
    int a, b;
    // Individually declaring functions as friend

    friend int calculator::sumRealComplex(Complex o1, Complex o2);
    friend int calculator::sumCompComplex(Complex o1, Complex o2);
    // Aliter:
    // Declare the entire calculator class as friend
   // friend class calculator;

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
int calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc,comp;
    int res = calc.sumRealComplex(o1, o2);
    cout << "sum of real: " << res << endl;
    int result = comp.sumCompComplex(o1, o2);
    cout << "sum of comp: " << result << endl;
    return 0;
}