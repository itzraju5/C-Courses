#include <bits/stdc++.h>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &x, c2 &);

public:
    void intData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void intData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.intData(34);
    oc2.intData(67);

    exchange(oc1, oc2);

    // cout << "value of c1 After exchange =  " << oc1.display()<<endl;
    // cout << "value of c2 After exchange =  " << oc2.display()<<endl;

    cout << "value of c1 After exchange =  " << endl;
    oc1.display();
    cout << "value of c2 After exchange =  " << endl;
    oc2.display();
    return 0;
}
