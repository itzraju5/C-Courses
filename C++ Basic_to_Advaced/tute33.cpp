#include <iostream>
using namespace std;

class BankDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite() {}  //<------------ Must made the Blank CONSTRUCTOR otherwise thrown error ------------>
    BankDeposite(int p, int y, float r); // r can be a value like 0.04
    BankDeposite(int p, int y, int R);   // r can be a value like 14 (like %)

    void show();
};

BankDeposite ::BankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposite ::BankDeposite(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = float(R) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposite ::show()
{
    cout << "Principal ammount was" << principal << "return value after " << years << "year is: "<<returnValue << endl;
}

int main()
{

    BankDeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();  // gives Garbage values

    cout << "Enter the value of p, y & r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y & R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposite(p, y, R);
    bd2.show();

    return 0;
}
