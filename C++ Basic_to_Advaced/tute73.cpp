// #include <iostream>
// #include <map>
// #include <string>

// using namespace std;

// int main()
// {
//     map<string, int> marksMap;

//     marksMap["Atul"] = 58;
//     marksMap["Anish"] = 98;
//     marksMap["Aman"] = 97;
//     marksMap["Rohit"] = 100;
//     marksMap["Shubham"] = 99;
//     marksMap.insert({"lovish", 90});
//     marksMap.insert({{"Raju", 50},{"Satyam",96}});


//     map<string, int>::iterator iter;
//     for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
//     {
//         cout << (*iter).first <<" "<< (*iter).second<<endl;
//     }

//     cout<<"The size is:"<<marksMap.size()<<endl;;
//     cout<<"The maximum size is:"<<marksMap.max_size()<<endl;
//     cout<<"The empty return value is:"<<marksMap.empty()<<endl;


//     return 0;
// }



//---------------------------------------------------------//


#include <map>
#include <iostream>
#include<string>
using namespace std;
 
int main()
{
    map<int,string> mymap;
     
    // mapping integers to strings
    mymap[1] = "Hi";
    mymap[2] = "This";
    mymap[3] = "is";
    mymap[4] = "GeeksForGeeks";
     
    cout << mymap[5];
    return 0;
}