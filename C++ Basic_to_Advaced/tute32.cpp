#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    // Simple(int a = 3, int b=3)
    // {
    //     data1 = a;
    //     data2 = b;
    // }
    Simple(int a , int b=3, int c = 5)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};
void Simple ::printData()
{
    // cout << "Data1, Data2,Data3 = " << data1<<"," << data2 << endl;
    cout << "Data1, Data2,Data3 = " << data1<<"," << data2 <<","<< data3<< endl;
}
int main(){
    // Simple s(1);
    Simple s(5,10);
    s.printData();

    return 0;
}