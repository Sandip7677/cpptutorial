#include <iostream>
using namespace std;

class shop
{
    int item_id[100];
    int item_price[100];
    int p;
    static int count;

public:
    // void counter(void)
    // {
    //     count = 0;
    // }
    void getdata(void);
    void printdata(void);
};
void shop ::getdata()
{
    cout << "input item id" << endl;
    cin >> item_id[count];
    cout << "input item price" << endl;
    cin >> item_price[count];
    ++count;
}
void shop ::printdata(void)
{
    //cout<<count;
    cout << "input item no whose id and price you want to know " << endl;
    cin >> p;
    if (p < count)
    {
        for (int i = 0; i <count; i++)
        {
            if (i == (p-1))
            {
                cout << i << endl;
                cout << "item id is " << item_id[i] << endl;
                cout << "item price is " << item_price[i] << endl<< endl;
            }
        }
    }
    else
    {
        cout<<"given no is wrong ,there is no item of that no"<<endl;
    }
}
int shop::count;
int main()
{
    int r;
    cout << "no of item you want to put in" << endl;
    cin >> r;
    shop first;
    // first.counter();
    for (int i = 0; i < r; i++)
    {
        first.getdata();
    }
    first.printdata();
    return 0;
}