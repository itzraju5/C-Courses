// #include <iostream>
// #include <fstream>

// using namespace std;

// int main()
// {
//     ofstream out;
//     out.open("sample62.txt");
//     out<<"This is me"<<endl;
//     out<<"This is me also"<<endl;
//     out<<"This is me alsi";
//     out.close();

//     ifstream in;
//     string st, st2;
//     in.open("sample62.txt");
//     in >> st >> st2;
//     // getline(in, st);
//     // getline(in, st2);
//     cout<<st<<st2;
//     in.close();
//     return 0;
// }



#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample62.txt");
    out<<"This is me"<<endl;
    out<<"This is me also"<<endl;
    out<<"This is me alsi";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample62.txt");
    while (in.eof() == 0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    
    return 0;
}