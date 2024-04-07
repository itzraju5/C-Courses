// #include <bits/stdc++.h>
// using namespace std;
// int  class_arrangement(string si);
// int main()
//     {
//         string si;
//         cin >> si;
//         cout << class_arrangement(si)<< endl;
//         return 0;
//     }


// int class_arrangement(string si)
// {
//     int N = si.length();

//     int ones = 0;
//     int zeros = 0;

//     for (int i = 0; i < N; i++)
//     {

//         if (si[i] == 'B')
//         {
//             ones += 1;
//         }
//         else
//         {
//             zeros += 1;
//         }
//     }

//     if (ones > (zeros + 1) || zeros > (ones + 1))
//     {
//         return -1;
//     }
//     if (N % 2)
//     {
//         int num = (N + 1);

//         int one_even = 0;
//         int zero_even = 0;

//         for (int i = 0; i < N; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 if (si[i] == 'B')
//                 {
//                     one_even += 1;
//                 }
//                 else
//                 {
//                     zero_even += 1;
//                 }
//             }
//         }
//         if (ones > zeros)
//         {
//             return num - one_even;
//         }

//         else
//         {
//             return num - zero_even;
//         }
//     }
//     else
//     {

//         int one_odd = 0;
//         int one_even = 0;

//         for (int i = 0; i < N; i++)
//         {
//             if (si[i] == 'B')
//             {
//                 if (i % 2)
//                 {
//                     one_odd += 1;
//                 }
//                 else
//                 {
//                     one_even += 1;
//                 }
//             }
//         }
//         if((N/2-one_odd)>(N/2-one_even))
//         {
//             return N/2-one_odd;
//         }
//         else{
//             return N/2-one_even;
//         }
//     }
// }




#include <bits/stdc++.h>
using namespace std;

int main()
{
    string my_str1;
    string my_str2;
    cin >>my_str1>>my_str2;
    int index = 0;
    for (int i = 0; i < (int)my_str2.length(); i++)
    {
        switch (my_str2[i])
        {
        case 'R':
            if (index + 1 < (int)my_str1.length())
                index++;
            break;
        case 'L':
            if (index > 0)
                index--;
            break;
        case 'T':
            if (my_str1[index] != '9')
                my_str1[index]++;
            break;
        case 'D':
            if (my_str1[index] != '0')
                my_str1[index]--;
            break;
        case 'S':
            i++;
            string number;
            for (i; i < (int)my_str2.length() && my_str2[i] >= '0' && my_str2[i] <= '9'; i++)
                number.push_back(my_str2[i]);
            i--;
            int ind = stoi(number);
            swap(my_str1[index], my_str1[ind - 1]);
            break;
        }
    }
    cout << my_str1 << endl;
}