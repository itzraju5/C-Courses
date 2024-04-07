// #include <iostream>
// using namespace std;

// template <class T>
// class Harry
// {
// public:
//     T data;
//     Harry(T a)
//     {
//         data = a;
//     }
// };
// int main()
// {
//     Harry<int> h(5);  // 5
//     cout << h.data;
//     // Harry<float> h(5.5);  // 5.5
//     // cout << h.data;

//     return 0;

// }

//--------------------------------------------------//

// #include <iostream>
// using namespace std;

// template <class T>
// class Harry
// {
// public:
//     T data;
//     Harry(T a)
//     {
//         data = a;
//     }
//     void display()
//     {
//         cout<<data;
//     }
// };
// int main()
// {
//     Harry<float> h(5.7);
//     cout<<h.data<<endl;
//     h.display();

//     return 0;
// }

//-------------------------------------------------//

#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << " I am first func() " << a << endl;
}
template <class T>
void func1(T a)
{
    cout << " I am templatised func() " << a << endl;
}
int main()
{

    // Harry<char> h('c');     // c
    Harry<int> h(87);         // 87
    h.display();

    func(4);  //-------------->  Exact match takes the highest priority
    func1(4); //-------------->   I am templatised func() 4
    return 0;
}
