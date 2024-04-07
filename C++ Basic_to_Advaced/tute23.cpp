#include <bits/stdc++.h>
using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }

    void setprice();
    void displayprice();
};

void shop ::setprice()
{
    cout << " Enter Id of your item no. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << " Enter price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << " the price of item with Id " << itemId[i] << " is " << itemprice[i] << "\n ";
    }
}

int main()
{
    shop dukaan;

    dukaan.initcounter();

    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}


