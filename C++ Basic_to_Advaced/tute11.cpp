#include <bits/stdc++.h>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void onescompliment();
    void display();
};
void binary :: read()
{
    cout << " Enter a binary number " << endl;
    cin >> s;
}
void binary :: chk_bin()
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << " Incorrect Binary format " << endl;
            exit(0);
        }
    }
}
void binary :: onescompliment()
{
    chk_bin();
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    cout << " Displaying your number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;

    b.read();
    b.display();
    b.onescompliment();
    b.display();

    return 0;
}