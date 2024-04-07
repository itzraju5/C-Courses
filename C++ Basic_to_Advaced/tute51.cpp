#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void getData()
    {
        cout<<"Real part is "<<real<<endl;
        cout<<"Imaginary part is "<<imaginary<<endl;

    }
   void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    Complex c1;
    Complex *ptr = &c1;
    // Complex *ptr = new Complex;    // creating object using new operator
    // (*ptr).setData(1,54);
    ptr->setData(1,54);
    // (*ptr).getData();
    ptr->getData();

// Array of objects:-----

 
    // Complex *ptr1 = new Complex[4];    // Array of objects using pointer
    // ptr1->setData(1,54);
    // ptr1->getData();
    return 0;
}