// #include <iostream>
// using namespace std;

// template <class T1=int, class T2=float, class T3=char>
// class Harry
// {

//     public:
//     T1 a;
//     T2 b;
//     T3 c;
//     Harry(T1 x, T2 y, T3 z)
//     {
//         a = x;
//         b = y;
//         c = z;
//     }
//     void display()
//     {
//         cout<<"value a = "<<a<<endl;
//         cout<<"value b = "<<b<<endl;
//         cout<<"value c = "<<c<<endl;

//     }
// };

// int main()
// {
//     Harry<>h(4, 6.4, 'C');
//     h.display();

//     return 0;
// }

//-----------------------------------------------//


#include <iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Harry
{

    public:
    T1 a;
    T2 b;
    T3 c;
    Harry(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout<<"value a = "<<a<<endl;
        cout<<"value b = "<<b<<endl;
        cout<<"value c = "<<c<<endl;

    }
};

int main()
{
    // Harry<>h(4, 6.4, 'C');
    // h.display();
    // Harry<float, char, char>g(1.4, 'O', 'C');
    Harry<float, char, char>g('A', 'O', 'C');   //--->   value a = 65  value b = O   value c = C
    g.display();

    return 0;
}