// #include<bits/stdc++.h>
// using namespace std;

// class Complex{

//     int a, b;

//     public:
//     void setData(int x, int y)
//     {
//         a = x;
//         b = y;
        
//     }
//     void showData()
//     {
//         cout << " sum: " << a <<" "<< b;
//     }
//     // Complex add(Complex c)
//     Complex operator +(Complex c)
//     {
//         Complex temp;
//         temp.a = a + c.a;
//         temp.b = b + c.b;

//         return temp;
//     }

    
// };
// int main()    
// {
//     Complex c1, c2,c3;
//     c1.setData(3,4);
//     c2.setData(5,6);

//     // c3 = c1.add(c2); 
//     c3 = c1.operator +(c2);    // c3 = c1 + c2 ;
//     c3.showData();
    
//     return 0;
// }

//----------------------------------------------------------//

// #include<bits/stdc++.h>
// using namespace std;

// class Complex{

//     int a, b;

//     public:
//     void setData(int x, int y)
//     {
//         a = x;
//         b = y;
        
//     }
//     void showData()
//     {
//         cout << " Result: " << a <<" "<< b;
//     }
//     Complex operator -()
//     {
//         Complex temp;
//         temp.a = -a;
//         temp.b = -b;

//         return temp;
//     }


// };
// int main()
// {
//     Complex c1, c2,c3;
//     c1.setData(3,4);

//     c2 = c1.operator -();             // c2 = -c1;
    
//     c2.showData();
//     return 0;
// }


//------------------------------------------------//


// #include<bits/stdc++.h>
// using namespace std;

// class Integer{

//     int x;

//     public:
//     void setData(int a)
//     {
//         x = a;
//     }
//     void showData()
//     {
//         cout << " Result: " << x ;
//     }
//     Integer operator ++()  //   pre increment
//     {
//         Integer i;
//         i.x = ++x;

//         return i;
//     }


// };
// int main()
// {
//     Integer i1, i2,i3;
//     i1.setData(3);
//     i1.showData();

//     i2 = ++i1;                   // i2 = i1.operator++();
//     i1.showData();
//     i2.showData();

//     return 0;
// }

//---------------------------------------------//


#include<bits/stdc++.h>
using namespace std;

class Integer{

    int x;

    public:
    void setData(int a)
    {
        x = a;
    }
    void showData()
    {
        cout << " Result: " << x ;
    }
    Integer operator ++(int)  //   post increment
    {
        Integer i;
        i.x = x++;

        return i;
    }


};
int main()
{
    Integer i1, i2,i3;
    i1.setData(3);
    i1.showData();

    i2 = i1++;              // i2 = i1.operator++(); 
    i1.showData();
    i2.showData();

    return 0;
}