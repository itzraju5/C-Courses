#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{
    int a,b;
    public:
    void getDataSimple()
    {
      cout<<"Enter two number"<<endl;
      cin>>a>>b;
    }
    void performOperation()
    {
        cout<<"a + b = "<<a+b<<endl;
        cout<<"a - b = "<<a-b<<endl;
        cout<<"a * b = "<<a*b<<endl;
        cout<<"a / b = "<<a/b<<endl;
    }
};

class ScientificCalculator
{
    int a , b;
public:
   void getDataScientific()
   {
       cout<<"Enter one number "<<endl;
       cin>>a;

   }
   void performOperationsScientific()
   {
     cout<<"cos(a) = "<< cos(a)<<endl;
     cout<<"sin(a) = "<< sin(a)<<endl;
     cout<<"tan(a) = "<< tan(a)<<endl;
     cout<<"exp(a) = "<< exp(a)<<endl;
   }
};

class HybridCalculator:public SimpleCalculator ,public ScientificCalculator
{

};
int main()
{
    // SimpleCalculator calc;
    // calc.getDataSimple();
    // calc.performOperation();

    // ScientificCalculator calc1;
    // calc1.getDataScientific();
    // calc1.performOperationsScientific();

    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    
    calc.getDataSimple();
    calc.performOperation();
    return 0;
}