// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 4;
//     int *ptr = &a;

//     cout <<"value = " <<*ptr<<endl;

//     // new keyword

//     int *p = new int(10);
//     float *p1 = new float(10.5);
//     cout<<"value = "<<*p<<endl;
//     cout<<"value = "<<*p1<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // int* arr = new int[4];

    // int *arr = NULL;
    // arr = new int[4];

    int *arr;
    arr = new int[4];
    arr[0] = 10;
    arr[1] = 20; // *(arr+1) = 20;
    arr[2] = 30;
    arr[3] = 40;

    // cout << "value = " << arr[0] << endl;
    // cout << "value = " << arr[1] << endl;
    // cout << "value = " << *(arr+1) << endl;
    // cout << "value = " << arr[3] << endl;

    for(int i=0; i< 4;i++)
    {
       cout<<arr[i]<<endl;
    }
    // delete arr;
    delete[] arr;

    cout << "value = " << arr[0] << endl;
    cout << "value = " << arr[1] << endl;
    cout << "value = " << arr[2] << endl;
    cout << "value = " << arr[3] << endl;

    return 0;
}
