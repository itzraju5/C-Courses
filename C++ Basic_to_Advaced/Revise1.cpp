// #include <iostream>
// using namespace std;
// #include <string>
// int main ()
// {
//   int flag = 1;
//   string str;
//   getline(cin, str);

//   for (int  i = str.length() / 2; i >= 0; --i)
//   {
//     if (str[i] != str[str.size()-i-1])
//     {
//       flag = 0;
//       break;
//     }

//   }
//   cout << flag <<endl;
//   if(flag)
//   {
//     cout << "Yes";
//   }
//   else{
//     cout << "No";
//   }

//   return 0;
// }
//---------------------------------------------------//
// #include <bits/stdc++.h>
// using namespace std;

// class employee
// {
//     int id;
//     static int count;

// public:
//     void setData()
//     {
//         cout << "Enter the id" << endl;
//         cin >> id;
//         count++;
//     }
//     void getData()
//     {

//         cout << "the id of this employee is" << id << "employee no" <<count <<endl;
//     }
//     static void getCount()
//     {
//         cout << "value of count is" << count << endl;
//     }
// };
// int employee :: count = 1000;
// int main()
// {
//     employee harry, rohan, lavish;
//     harry.setData();
//     harry.getData();
//     employee :: getCount();

//     rohan.setData();
//     rohan.getData();
//     employee :: getCount();

//     lavish.setData();
//     lavish.getData();
//     employee :: getCount();

//     return 0;
// }
//---------------------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;
// class Complex
// {

//     int a;
//     int b;

// public:

//     void setData(int v1, int v2)
//     {
//          a = v1;
//          b = v2;
//     }
//     void setDataSum( Complex o1, Complex o2)
//     {
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }
//     void Print()
//     {
//         cout << " your complex no is " << a << " + "<< b << " i "<<endl;
//     }
// };

// int main()
// {
//     Complex c1, c2, c3;

//     c1.setData(1, 2);
//     c1.Print();

//     c2.setData(3, 4);
//     c2.Print();

//     c3.setDataSum(c1 , c2);
//     c3.Print();

//     return 0;
// }

//---------------------------------------------------//

// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     friend Complex sumComplex(Complex o1, Complex o2);
//     int a, b;
//     public:

//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

//     void PrintNumber()
//     {
//         cout << "your no. is " << a <<" + " << b << " i " <<endl;
//     }
// };

// Complex sumComplex(Complex o1, Complex o2)
// {
//     Complex o3;
//     cout << o1.a <<endl;
//     o3.setNumber((o1.a + o2.a), (o1.b+ o2.b));
//     return o3;
// }
// int main()
// {
//     Complex c1, c2, sum;

//     c1.setNumber(1,4);
//     c2.setNumber(5,8);

//     c1.PrintNumber();
//     c2.PrintNumber();

//     sum = sumComplex(c1, c2);

//     sum.PrintNumber();
//     return 0;
// }
//------------------------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;

// class Complex;

// class Calculator
// {

// public:
//     int add(int a, int b)
//     {
//         return (a + b);
//     }
//     int sumRealComplex(Complex, Complex);
//     int sumCompComplex(Complex, Complex);
// };
// class Complex
// {
//     int a, b;
//     friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
//     friend int Calculator :: sumCompComplex(Complex o1, Complex o2);

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

//     void PrintNumber()
//     {
//         cout << "your no. is " << a << " + " << b << " i " << endl;
//     }
// };

// int Calculator ::sumCompComplex(Complex o1, Complex o2)
// {
//     return (o1.b + o2.b);
// }

// int main()
// {
//     Complex o1, o2;
//     o1.setNumber(1, 4);
//     o2.setNumber(5, 7);

//     Calculator calc;
//     // int res = calc.sumRealComplex(o1, o2);
//     int resc = calc.sumRealComplex(o1, o2);

//     cout << resc;

//     return 0;
// }
//-----------------------------------------------------------//

#include <bits/stdc++.h>
using namespace std;
class c2;
class c1
{

    int val;

public:
    friend void exchange(c1 &, c2 &);
    void intData(int a)
    {
        val = a;
    }
    void display()
    {
        cout << val << endl;
    }
};
class c2
{

    friend void exchange(c1 &, c2 &);
    int val2;

public:
    void intData(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.intData(34);
    oc2.intData(67);

    exchange(oc1, oc2);

    cout << "value of c1 After exchange =  " << endl;
    oc1.display();
    cout << "value of c2 After exchange =  " << endl;
    oc2.display();

    return 0;
}