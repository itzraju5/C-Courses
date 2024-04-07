// #include<iostream>
// using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a, float b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }
// int main()
// {
//     float a,b;
//     a = funcAverage(5, 2);
//     cout<<a<<endl;
//     printf("Average = %0.3f ",a);
//     b = funcAverage2(5, 2.4);
//     printf("Average = %0.3f ",b);
//     return 0;
// }

//-----------------------------------------------------//

// #include<iostream>
// using namespace std;

// template<class T1, class T2>
// float funcAverage(T1 a, T2 b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }
// int main()
// {
//     float a;
//     a = funcAverage(5.2, 3.0);
//     cout<<a<<endl;
//     return 0;
// }

//---------------------------------------------------//

#include<iostream>
using namespace std;

template<class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a =  b;
    b = temp;
}

int main()
{
    int x = 5, y = 7;
    swapp(x, y);
    cout<< x <<" "<< y;
    return 0;
}
