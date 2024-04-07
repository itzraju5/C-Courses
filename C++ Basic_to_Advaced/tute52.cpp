#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
    void setData(int a, float b)
    {
        id = a;
        price = b;

    }
   void getData(){

        cout<<"Code of this item "<<id<<endl;
        cout<<"price of this item "<<price<<endl;     
    }
};
int main()
{
    int p;
    float q;
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Id and price of item "<< i+1 <<endl;
        cin>>p>>q;
        
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;

    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number "<< i+1 <<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    


    return 0;
}