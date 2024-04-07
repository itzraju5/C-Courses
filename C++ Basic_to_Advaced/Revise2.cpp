// #include <bits/stdc++.h>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(void); // Constructor declaration

//     void printNumber()
//     {
//         cout << " your complex no. is :  " << a << " + " << b << "i" << endl;

//     }

// };

// // It is used to initialize the objects of its class.

// Complex::Complex(void)
// {
//     // a = 0;
//     // b = 0;
//     cout << "Hello World!" << endl;
// }
// int main()
// {
//     // Default constructor called automatically
//     // when the object is created
//     Complex c1, c2, c3,c4;

//     c1.printNumber();
//     cout << "Hello Raju" << endl;
//     c2.printNumber();
//     c3.printNumber();

//     return 0;
// }

//-------------------------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int);

//     void printNumber()
//     {
//         cout << " your complex no. is :  " << a << " + " << b << "i" << endl;
//     }
// };

// Complex::Complex(int x, int y)
// {
//     a = x;
//     b = y;
//     cout << "Hello World!" << endl;
// }
// int main()
// {

//     // Complex a(4,6);

//     Complex b = Complex(4, 7);
//     b.printNumber();

//     return 0;
// }

//-------------------------------------------------------//
// #include <bits/stdc++.h>
// using namespace std;

// class Point
// {
//     // friend double distance(Point , Point);
//     // friend Point(Point, Point);
//     int x, y;

// public:
//     Point(int, int);

//     void display()
//     {
//         cout << "The point is = (" << x << "," << y << ")" << endl;
//     }

//     Point(Point o1, Point o2)
//     {
//         // double c = sqrt(pow((o2.y - o1.y),2)  + pow((o2.x - o1.x),2));
//         double c = sqrt((o2.y - o1.y) * (o2.y - o1.y) + (o2.x - o1.x) * (o2.x - o1.x));
//         cout << c << endl;
//         cout << "raju ";
//     }
// };
// Point :: Point(int a, int b)
// {
//     x = a;
//     y = b;
// }
// // double distance (Point o1, Point o2)
// // {
// //     double c = sqrt(pow((o2.y - o1.y),2) + pow((o2.x - o1.x),2));
// //     return c;
// // }

// int main()
// {

//     int x1, y1;
//     cout << "Enter x & y coordinate" << endl;
//     cin >> x1 >> y1;
//     Point p(x1, y1);

//     int x2, y2;
//     cout << "Enter x & y coordinate" << endl;
//     cin >> x2 >> y2;
//     Point q(x2, y2);

//     p.display();
//     q.display();

//     // cout << distance(p,q);

//     Point(p, q);

//     return 0;
// }
//-------------------------------------------------------//
// #include<bits/stdc++.h>
// using namespace std;

// class Complex{

//     int a, b;
//     public:
//     Complex()
//     {
//         a = 0;
//         b = 0;
//     }
//     Complex(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     Complex (int x)
//     {
//         a = x;
//         b = 0;
//     }
//     void printNumber()
//     {
//         cout << " your complex no. is :  " << a << " + " << b << "i" << endl;
//     }

// };

// int main()
// {

//     Complex c1(4,6);
//     c1.printNumber();

//     Complex c2(5);
//     c2.printNumber();

//     Complex c3;
//     c3.printNumber();

//     return 0;
// }

//------------------------------------------------------//

// #include<bits/stdc++.h>
// using namespace std;

// class Simple{

//     int data1, data2;
//     public:
//     Simple(int a, int b=9)
//     {
//         data1 = a;
//         data2 = b;
//     }
//     void printData();

// };

// void Simple :: printData()
// {
//     cout << data1 <<" "<< data2<<endl;
// }
// int main()
// {

//     Simple s(1);
//     s.printData();

//     return 0;
// }

//-----------------------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;

// class BankDeposite
// {
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

// public:
//     BankDeposite()
//     {

//     }
//     BankDeposite(int p, int y, float r);
//     BankDeposite(int p, int y, int r);

//     void show();
// };
// BankDeposite ::BankDeposite(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;

//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interestRate);
//     }
// }
// BankDeposite ::BankDeposite(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r) / 100;
//     returnValue = principal;

//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interestRate);
//     }
// }

// void BankDeposite :: show()
// {
//     cout << "Principal ammount was " << principal << " return value after " << years << "year is: "<<returnValue << endl;
// }

// int main()
// {
//     BankDeposite bd1, bd2, bd3;
//     int p, y;
//     float r;
//     int R;

//     bd3.show();

//     cout << " Enter the value of p , y ,r " << endl;
//     cin >> p >> y >> r;
//     bd1 = BankDeposite(p, y, r);
//     bd1.show();

//     cout << " Enter the value of p , y ,R " << endl;
//     cin >> p >> y >> R;
//     bd2 = BankDeposite(p, y, R);
//     bd2.show();

//     return 0;
// }

//-----------------------------------------------------//
// #include <bits/stdc++.h>
// using namespace std;
// class Number
// {

// private:
//     int a;

// public:
//     Number()
//     {
//         a = 0;
//     }
//     Number(int num)
//     {
//         a = num;
//     }
//     Number(Number &obj)
//     {
//         cout << " copy constructor called " << endl;
//         a = obj.a;
//     }
//     void display()
//     {
//         cout << " The number for this object is " << a << endl;
//     }
// };

// int main()
// {
//     Number x, y, z(45);
//     x.display();
//     y.display();
//     z.display();

//     Number z1(x);
//     z1.display();

//     return 0;
// }

//------------------------------------------------------------//

// #include <iostream>
// using namespace std;
// int count = 0; // global variable
// class num
// {

// public:
//     num()
//     {
//         count++;
//         cout << "This is the time where constructor is called for object no : " << count << endl;
//     }
//     ~num()
//     {
//         cout << "this is the time when my destructor is called for object no:" << count << endl;
//         count--;
//     }
// };
// int main()
// {
//     cout << "we are inside our main function" << endl;
//     cout << "Creating 1st object n1" << endl;
//     num n1;

//     {
//         cout<<"Entering this block"<<endl;
//         cout << "Creating 2 more object" << endl;
//         num n2, n3;

//         cout << "Exiting this block" << endl;
//     }
//     cout << "Back to main" << endl;

//     return 0;
// }

//---------------------------------------------//


#include <iostream>
using namespace std;

class Complex{

    int a, b;
    public:
    ~Complex()
    {
        cout << " Hello Destructor " <<endl;
    }

};  
void fun()
{
    Complex obj;
}

int main()
{
 
    fun();


    return 0;
}