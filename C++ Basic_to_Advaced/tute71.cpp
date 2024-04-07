// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         // cout<< v[i] <<" ";
//         cout<< v.at(i) << " ";  // also you can use
//     }
    
// } 
// int main()
// {
//     // int element;
//     // vector<int> vec1;
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     cout<<" Enter the element to add to this vector "<<endl;    
//     //     cin >> element;
//     //     vec1.push_back(element);
//     // }
//     // display(vec1);

//     int element, size;
//     cout<<" Enter the size of vector: ";
//     cin>>size;
//     vector<int> vec1;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<" Enter the element to add to this vector: "<<endl;    
//         cin >> element;
//         vec1.push_back(element);
//     }
//     display(vec1);
//     return 0;
// }

// ---------------------------------------------------------//

// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<< v[i] <<" ";
//     }
    
// } 
// int main()
// {
//     int element, size;
//     cout<<" Enter the size of vector: ";
//     cin>>size;
//     vector<int> vec1;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<" Enter the element to add to this vector: "<<endl;    
//         cin >> element;
//         vec1.push_back(element);
//     }
//     vec1.pop_back();
//     display(vec1);
//     return 0;
// }

//--------------------------------------------------------//

// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<< v[i] <<" ";
//     }
//     cout<<endl;
// } 
// int main()
// {
//     int element, size;
//     cout<<" Enter the size of vector: ";
//     cin>>size;
//     vector<int> vec1;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<" Enter the element to add to this vector: "<<endl;    
//         cin >> element;
//         vec1.push_back(element);
//     }
   
//     display(vec1);
//     // vector<int> :: iterator iter = vec1.begin();
//     // vec1.insert(iter, 55);                     // 55 1 2 3 
//     // vec1.insert(iter,5, 55);                      // 55 55 55 55 55 1 2 3
//     // display(vec1);
//     // vec1.erase(vec1.begin(), vec1.begin() + 1);        // 2 3 4 5
//     // vec1.erase(vec1.begin(), vec1.begin() + 3);     // 4 5 
//     vec1.erase(vec1.begin() + 1);                   // 1 3 4 5
//     display(vec1);
//     return 0;
// }


//---------------------------------------------------------------//

#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<" Displaying this vector: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i] <<" ";
    }
    cout<<endl;
} 
int main()
{

    // Ways to create a vector
    // vector<int> vec1;         // zero length vector
    // display(vec1);         // Displaying this vector

    vector<char> vec2(4);        // 4-element character vecter
    vec2.push_back('5');          // 5   
    // display(vec2);

    // vector<int> vec2(4);        // 4-element integer vecter
    // vec2.push_back(4);       
    // vec2.push_back(5);       

    // display(vec2);


    // vector<char> vec3(vec2);     // 4-element character vector from vec2 
    // display(vec3);


    vector<int> vec4(6, 3);      // 3 3 3 3 3 3  --->  6-element vector of 3
    display(vec4);
    cout<<vec4.size()<<endl;     // 6


    
    return 0;
}
