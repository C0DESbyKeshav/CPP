#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    int size = 2;
    //* This is array of object:
    ShopItem *ptr = new ShopItem[size]; // This Syntax simply means that the compiler will tell the memory to free space for 2 elements and point the index number to the 1st element.
    ShopItem *ptrTemp = ptr;

    int p, i;
    float q;

    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p, q);    // Alternative
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "\nItem number: " << i + 1 << endl;
        // (*ptr).getData(p, q);    // Alternative
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}
