#include<iostream>
using namespace std;

class Complex
{
  int a,b;

  public:
  Complex(int x, int y)
  {
      a = x; b = y;
      cout<<"Hello World 1"<<endl;
  }
  Complex(int k)
  {
      a = k;
      cout<<"Hello World 2"<<endl;
  }
  Complex()
  {
     cout<<"Hello World 3"<<endl;
  }
};


int main(){

Complex c1(3,4), c2, c3(5);
Complex c4(c1);
    return 0;
}