// #include <bits/stdc++.h>
// using namespace std;

// class BaseClass
// {

// public:
//     int var_base;
//     void display()
//     {
//         cout << " Displaying Base class variable var_base " << var_base << endl;
//     }
// };

// class DerivedClass : public BaseClass
// {

// public:
//     int var_derived;
//     void display()
//     {
//         cout << " Displaying Base class variable var_base " << var_base << endl;
//         cout << " Displaying Derived class variable var_derived " << var_derived << endl;
//     }
// };
// int main()
// {

//     BaseClass *base_class_pointer;
//     BaseClass obj_base;

//     DerivedClass obj_derived;
//     base_class_pointer = &obj_derived; // pointing base class pointer to derived class

//     base_class_pointer->var_base = 34;
//     // base_class_pointer -> var_derived = 134;   // will thrown an error

//     base_class_pointer->display();

//     base_class_pointer->var_base = 3400;
//     base_class_pointer->display();

//     DerivedClass *derived_class_pointer;
//     derived_class_pointer = & obj_derived;
//     derived_class_pointer -> var_base = 9448;
//     derived_class_pointer -> var_derived = 98;
//     derived_class_pointer -> display();

//     return 0;
// }

//--------------------------------------------------//

#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base = 1;
    void display()
    {
        cout << " 1. Displaying Base Class variable Var_base = " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2. Displaying Base Class variable Var_base " << var_base << endl;
        cout << "2. Displaying Derived Class variable Var_derived== " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer-> display();

    return 0;
}

//-----------------------------------------------------//


// #include <iostream>
// #include <cstring>
// using namespace std;
// class CWH
// {
// protected:
//     string title;
//     float rating;

// public:
//     CWH(string s, float r)
//     {
//         title = s;
//         rating = r;
//     }
//      void display()
//     {
//         cout << "Bogus" << endl;
//     }
// };
// class CWHVideo : public CWH
// {
//     float videoLength;

// public:
//     CWHVideo(string s, float r, float vL) : CWH(s, r)
//     {
//         videoLength = vL;
//     }
//     void display()
//     {
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings: " << rating << " out of 5 stars" << endl;
//         cout << "Length of this video is: " << videoLength << " minutes" << endl;
//     }
// };
// class CWHText : public CWH
// {
//     int words;

// public:
//     CWHText(string s, float r, int wc) : CWH(s, r)
//     {
//         words = wc;
//     }
//     void display()
//     {
//         cout << "This is an amazing text tutorial with title " << title << endl;
//         cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
//         cout << "No of words in this text tutorial is: " << words << " words" << endl;
//     }
// };
// int main()
// {
//     string title;
//     float rating, vlen;
//     int words;

//     // for Code With Harry Video
//     title = "Django tutorial";
//     vlen = 4.56;
//     rating = 4.89;
//     CWHVideo djVideo(title, rating, vlen);
//     // djVideo.display();
//     // for Code With Harry Text
//     title = "Django tutorial Text";
//     words = 433;
//     rating = 4.19;
//     CWHText djText(title, rating, words);
//     // djText.display();

//     //-----------with the help of pinter--------//

//     CWH *tute[2];
//     tute[0] = &djVideo;
//     tute[1] = &djText;

//     tute[0]->display();
//     tute[1]->display();

//     return 0;
// }
