// #include <iostream>
// using namespace std;

// class Base
// {
//     int data1; // Private By default and it is not inherited
// public:
//     int data2;
//     void setData();
//     int getData1();
//     int getData2();
// };
// void Base ::setData()
// {
//     data1 = 10;
//     data2 = 20;
// }
// int Base ::getData1()
// {
//     return data1;
// }
// int Base ::getData2()
// {
//     return data2;
// }

// class Derived : private Base
// {
//     int data3;

// public:
//     void process();
//     void display();
// };
// void Derived ::process()
// {
//     setData();
//     data3 = data2 * getData1();
// }
// void Derived ::display()
// {
//     cout << "value of data1 " << getData1() << endl;
//     cout << "value of data2 " << data2 << endl;
//     cout << "value of data3 " << data3 << endl;
// }
// int main()
// {
//     Derived der;
//     // der.setData();
//     der.process();
//     der.display();

//     return 0;
// }

//-----------------------------------------------------//

// #include <iostream>
// #include <iostream>
// using namespace std;
// class Student
// {
// protected:
//     int roll_number;

// public:
//     void set_roll_number(int);
//     void get_roll_number(void);
// };
// void Student ::set_roll_number(int r)
// {
//     roll_number = r;
// }
// void Student ::get_roll_number()
// {
//     cout << "roll number is " << roll_number << endl;
// }
// class Exam : public Student
// {
// protected:
//     float maths;
//     float physics;

// public:
//     void set_marks(float, float);
//     void get_marks(void);
// };
// void Exam ::set_marks(float m1, float m2)
// {
//     maths = m1;
//     physics = m2;
// }
// void Exam ::get_marks()
// {
//     cout << "maths marks = " << maths << endl;
//     cout << "physics marks = " << physics << endl;
// }
// class Result : public Exam
// {
//     float percentage;

// public:
//     void display_result()
//     {
//         cout << "hello1" << endl;
//         get_roll_number();
//         cout << "hello2" << endl;
//         get_marks();
//         cout << "percentage = " << (maths + physics) / 2 << "%" << endl;
//     }
// };

// int main()
// {
//     Result harry;
//     harry.set_roll_number(420);
//     harry.set_marks(94.0, 90.0);
//     harry.display_result();

//     return 0;
// }

//-----------------------------------------------------//

// #include <iostream>
// using namespace std;

// class Base1
// {

// protected:
//     int base1int;

// public:
//     void set_base1int(int a)
//     {
//         base1int = a;
//     }
// };
// class Base2
// {

// protected:
//     int base2int;

// public:
//     void set_base2int(int a)
//     {
//         base2int = a;
//     }
// };

// class Derived : public Base1, public Base2
// {

// public:
//     void show()
//     {
//         cout << base1int << endl;
//         cout << base2int << endl;
//         cout << base1int + base2int << endl;
//     }
// };

// int main()
// {
//     Derived harry;

//     harry.set_base1int(25);
//     harry.set_base2int(5);
//     harry.show();

//     return 0;
// }

//----------------------------------------------------------//

// #include <iostream>
// using namespace std;

// class Base1
// {
// public:
//     void greet()
//     {
//         cout << "How are you" << endl;
//     }
// };
// class Base2
// {
// public:
//     void greet()
//     {
//         cout << "Kaise ho" << endl;
//     }
// };
// class Derived : public Base1, public Base2
// {
//     int a;

//     public:

//         void greet()
//         {
//             Base2 :: greet();
//             cout<<"Hey Raju"<<endl;
//         }
// };
// int main()
// {
//      Base1 base1obj;
//      Base2 base2obj;

//     //  base1obj.greet();
//     //  base2obj.greet();

//      Derived d;
//     d.Base1 :: greet();

//     return 0;
// }

//----------------------------------------//

// #include <iostream>
// using namespace std;

// class B
// {
//     int a;

// public:
//     void say()
//     {
//         cout << "Hello1" << endl;
//     }
// };
// class D : public B
// {
//     int a;

// // public:
// //     void say()
// //     {                                                    //----->>>>    override Base class method
// //         cout << "Hello2" << endl;
// //     }
// };

// int main()
// {
//     B b;
//     b.say();

//     D d;
//     d.say();

//     return 0;
// }

//------------------------------------------------//

// #include <iostream>
// using namespace std;

// class Student
// {
// protected:
//     int roll_number;

// public:
//     void set_roll_number(int a)
//     {
//         roll_number = a;
//     }
//     void print_roll_number()
//     {
//         cout << "roll no. = " << roll_number << endl;
//     }
// };

// class Test : virtual public Student
// {
// protected:
//     float maths, physics;

// public:
//     void set_marks(float m1, float m2)
//     {
//         maths = m1;
//         physics = m2;
//     }
//     void print_marks()
//     {
//         cout << "maths marks = " << maths << endl;
//         cout << "physics marks = " << physics << endl;
//     }
// };

// class Sports : virtual public Student
// {
// protected:
//     float score;

// public:
//     void set_score(float sc)
//     {
//         score = sc;
//     }
//     void print_score()
//     {
//         cout << "score = " << score << endl;
//     }
// };

// class Result : public Test, public Sports
// {
// private:
//     float total;

// public:
//     void display(void)
//     {
//         total = maths + physics + score;
//         print_roll_number();
//         print_marks();
//         print_score();
//         cout << "total = " << total << endl;
//     }
// };

// int main()
// {
//     Result harry;
//     harry.set_roll_number(4200);
//     harry.set_marks(85.0, 90.0);
//     harry.set_score(10);
//     harry.display();

//     return 0;
// }

//---------------------------------------------------//

// #include <iostream>
// using namespace std;

// class Base1
// {
//     int data1;

// public:
//     Base1(int i)
//     {
//         data1 = i;
//         cout << "Base1 class constructor called" << endl;
//     }
//     void printDataBase1()
//     {
//         cout << "Value of data1 is " << data1 << endl;
//     }
// };
// class Base2
// {
//     int data2;

// public:
//     Base2(int i)
//     {
//         data2 = i;
//         cout << "Base2 class constructor called" << endl;
//     }
//     void printDataBase2()
//     {
//         cout << "Value of data2 is " << data2 << endl;
//     }
// };

// class Derived : public Base2, public Base1
// {
//     int derived1, derived2;

// public:
//     Derived(int a, int b, int c, int d) :  Base1(a), Base2(b)
//     {
//         derived1 = c;
//         derived2 = d;
//         cout<< "Derived class constructor called"<<endl;
//     }
//     void printDataDerived()
//     {
//         cout << "value of derived1 = " << derived1 << endl;
//         cout << "value of derived2 = " << derived2 << endl;
//     }
// };

// int main()
// {
//     Derived harry(1, 2, 3, 4);
//     harry.printDataBase1();
//     harry.printDataBase2();
//     harry.printDataDerived();

//     return 0;
// }

//------------------------------------------------------------------//

/*   whenever The Derived class default constructor is called , The Base class constructor is called automatically */

// #include<iostream>
// using namespace std;

// class Base{

//     int a, b;
//     public:
//     Base()
//     {
//         cout << " Hello " << endl;
//     }

// };

// class Derived : public Base
// {
//     int p, q;
//     public:
//     Derived()
//     {
//         cout << " Raju " << endl;
//     }

// };
// int main()
// {
//     Derived b;

//     return 0;
// }

// // C++ program to show the order of constructor calls
// // in Multiple Inheritance

// #include <iostream>
// using namespace std;

// // first base class
// class Parent1
// {

// 	public:

// 	// first base class's Constructor
// 	Parent1()
// 	{
// 		cout << "Inside first base class" << endl;
// 	}
// };

// // second base class
// class Parent2
// {
// 	public:

// 	// second base class's Constructor
// 	Parent2()
// 	{
// 		cout << "Inside second base class" << endl;
// 	}
// };

// // child class inherits Parent1 and Parent2
// class Child : public Parent1, public Parent2
// {
// 	public:

// 	// child class's Constructor
// 	Child()
// 	{
// 		cout << "Inside child class" << endl;
// 	}
// };

// // main function
// int main() {

// 	// creating object of class Child
// 	Child obj1;
// 	return 0;
// }

//-------------------------------------------------------------//

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int *arr = new int[3];

//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;

//     cout << arr[0] << endl;
//     cout << arr[1] << endl;
//     cout << arr[2] << endl;

//     delete [] arr;

//     arr[0] = 100;
//     arr[1] = 200;
//     arr[2] = 300;
//     cout << arr[0] << endl;
//     cout << arr[1] << endl;
//     cout << arr[2] << endl;

//     return 0;
// }

//--------------------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;

// class Complex
// {

//     int real, imaginary;

// public:
//     void getData()
//     {
//         cout << " real part " << real << endl;
//         cout << " imaginary part " << imaginary << endl;
//     }

//     void setData(int a, int b)
//     {
//         real = a;
//         imaginary = b;
//     }
// };

// int main()
// {
//     // Complex c1;
//     // c1.setData(1,54);
//     // c1.getData();

//     // Complex c1;
//     // Complex *ptr = &c1;
//     // (*ptr).setData(1,54);     or    // ptr-> setData(1,54);
//     // (*ptr).getData();         or    // ptr->getData();

//     Complex *ptr = new Complex;
//     (*ptr).setData(1, 54);
//     (*ptr).getData();

//     return 0;
// }

//-----------------------------------------------//

// #include <bits/stdc++.h>
// using namespace std;

// class ShopIteam
// {

//     int id;
//     float price;

// public:
//     void setData(int a, float b)
//     {
//         id = a;
//         price = b;
//     }
//     void getData()
//     {
//         cout << " code of this item is " << id << endl;
//         cout << " price of this item is  " << price << endl;
//     }
// };

// int main()
// {
//     int p;
//     float q;

//     int size = 10;
//     ShopIteam *ptr = new ShopIteam[size];
//     ShopIteam *ptrTemp = ptr;

//     for (int i = 0; i < size; i++)
//     {
//         cout << " enter id and price of item " << i + 1 << endl;
//         cin >> p >> q;

//         (*ptr).setData(p,q);  // ptr->setData();
//         ptr++;
//     }

//     for ( int i = 0; i < size; i++)
//     {
//         cout << " item number " << i+1 << endl;
//         ptrTemp -> getData();
//         ptrTemp++;

//     }

//     return 0;
// }

//-------------------------------------------//

// #include<iostream>
// using namespace std;

// class A{
//   int a;
//   public:
//     A& setData(int b)
// //    void setData(int a)
//    {
//         this->a = b;
//         return *this;
//    }
//      void getData()
//      {
//          cout<<"The value of a = "<< a <<endl;
//      }
// } ;

// int main()
// {
//     A b;
//     b.setData(4).getData();
//     // a.getData();

//     return 0;
// }

//---------------------------------------------------------//
