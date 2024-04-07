// #include <iostream>
// using namespace std;
// class vector
// {
//     public:
//         int *arr;
//         int size;
//         vector(int m)
//         {
//             size = m;
//             arr = new int[size];
//         }
//     int dotProduct(vector &v){
//         int d=0;
//         for (int i = 0; i < size; i++)
//         {
//             d+= this->arr[i] * v.arr[i]; 
//         }
//         return d;
//     }
// };

// int main()
// { 
//     vector v1(3); //vector 1
//     v1.arr[0] = 4;
//     v1.arr[1] = 3;
//     v1.arr[2] = 1;
//     vector v2(3); //vector 2
//     v2.arr[0]=1;
//     v2.arr[1]=0;
//     v2.arr[2]=1; 
//     int a = v1.dotProduct(v2); 
//     cout<<a<<endl;
//     return 0;
// }


/*****************Another method of previous problem***************/

// #include <iostream>
// using namespace std;
// class vector
// {
//     public:
//         int *arr;
//         int size;
//         vector(int m)
//         {
//             size = m;
//             arr = new int[size];
//         }
//     int dotProduct(vector v1, vector v2){
//         int d=0;
//         for (int i = 0; i < size; i++)
//         {
//             d+= v1.arr[i] * v2.arr[i]; 
//         }
//         return d;
//     }
// };

// int main()
// { 
//     vector v1(3); //vector 1
//     v1.arr[0] = 4;
//     v1.arr[1] = 3;
//     v1.arr[2] = 1;
//     vector v2(3); //vector 2
//     v2.arr[0] = 1;
//     v2.arr[1] = 0;
//     v2.arr[2] = 1; 

//     vector v3(3);

//     int a = v3.dotProduct(v1,v2); 
//     cout<<a<<endl;
//     return 0;
// }



// -----------------------------------------------------------------------//

// #include <iostream>
// using namespace std;
// class vector
// {
//     public:
//         int *arr;
//         int size;
//         vector(int m)
//         {
//             size = m;
//             arr = new int[size];
//         }
//     int dotProduct(vector &v){
//     // int dotProduct(vector &v, vector &c){
//         int d=0;
//         for (int i = 0; i < size; i++)
//         {
//             // d+= this->arr[i] * v.arr[i];
//             // cout<<this->arr[i];      //    1 0 1  when  v2.dotProduct(v2);
//             // cout<<this->arr[i];      //    4 3 1  when  v1.dotProduct(v2);
            
//             d +=  v.arr[i]  * v.arr[i];  // o/p - 2
//             // d +=  v.arr[i]  * c.arr[i];  // o/p - 5
//         }
//         return d;
//     }
// };

// int main()
// {   vector v3(3) ;
//     vector v1(3);     //vector 1
//     v1.arr[0] = 4;
//     v1.arr[1] = 3;
//     v1.arr[2] = 1;
//     vector v2(3);     //vector 2
//     v2.arr[0]=1;
//     v2.arr[1]=0;
//     v2.arr[2]=1;
//     // int a =  v1.dotProduct(v2); 
//     // int a =  v2.dotProduct(v2); 
//     // int a =  v3.dotProduct(v1, v2); 
//     int a =  v1.dotProduct(v2); 
//     cout<<a<<endl;
//     return 0;
// }


// // ------------------------------------------------------------- //

// #include<iostream>
// using namespace std;

// template<class T>
// class vector 
// {
//     public:
//     T *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new T[size];

//     }
//     T dotProduct(vector &v)
//     {
//         T d = 0;
//         for (int i = 0; i < size; i++)
//         {
//         d+= this->arr[i] * v.arr[i];
//         }
//     return d; 
//     }   

// };

// int main()
// {
//     vector<float> v1(3); //vector 1 with a float data type
//     v1.arr[0] = 1.4;
//     v1.arr[1] = 3.3;
//     v1.arr[2] = 0.1;
//     vector<float> v2(3); //vector 2 with a float data type
//     v2.arr[0]=0.1;
//     v2.arr[1]=1.90;
//     v2.arr[2]=4.1;
//     float a = v1.dotProduct(v2);
//     c  out<<a<<endl;
    
//     return 0;
// }


/*********************************************************************************/


// #include <iostream>
// using namespace std;
// template<class T>
// class vector
// {
//     public:
//         T *arr;
//         int size;
//         vector(int m)
//         {
//             size = m;
//             arr = new T[size];
//         }
//     T dotProduct(vector &v1, vector &v2){
//         T d=0;
//         for (int i = 0; i < size; i++)
//         {
//             // d+= this->arr[i] * v.arr[i]; 
//             d += v1.arr[i] * v2.arr[i];
//         }
//         return d;
//     }
// };

// int main()
// { 
//     // vector v1(3); //vector 1
//     // v1.arr[0] = 4;
//     // v1.arr[1] = 3;
//     // v1.arr[2] = 1;
//     // vector v2(3); //vector 2
//     // v2.arr[0]=1;
//     // v2.arr[1]=0;
//     // v2.arr[2]=1; 
//     // int a = v1.dotProduct(v2); 
//     // cout<<a<<endl;


//     vector <float>v3(3);
//     vector <float>v1(3); //vector 1
//     v1.arr[0] = 1.4;
//     v1.arr[1] = 3.3;
//     v1.arr[2] = 0.1;
//     vector <float>v2(3); //vector 2
//     v2.arr[0] = 0.1;
//     v2.arr[1] = 1.90;
//     v2.arr[2] = 4.1; 
//     float a = v3.dotProduct(v1,v2); 
//     cout<<a<<endl;
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;

template<class T1, class T2>
class myClass{

    public:
        T1 a;
        T2 b;
        myClass(T1 a, T2 b)
        {
            this->a = a;
            this->b = b; 

        }
        void display()
        {
            cout << a << " " << b;
        }

};

int main()
{
    myClass< int, char> obj(1, 'c');
    obj.display();

    return 0;
}


