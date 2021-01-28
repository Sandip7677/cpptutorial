#include <iostream>
using namespace std;

class RainWater
{
    int *arr;
    int size;
    int sum = 0;

public:
    RainWater(int a) : size(a)
    {
        arr = new int[size];
    }
    void getin(void);
    int rightboundry(int a);
    int leftboundry(int b);
    void calculate(void);
    void show(void);
};

void RainWater ::getin()
{
    cout << "input values in array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
int RainWater::leftboundry(int b)
{
    int r;
    for (int i = b; i > 0; i--)
    {
       r=max(arr[i],arr[i-1]);
    }
    return r;
}
int RainWater::rightboundry(int a)
{
    int r;
    for (int i = a; i < size - 1; i++)
    {
        r=max(arr[i],arr[i+1]);   
    }
    return r;
}
void RainWater ::calculate()
{
    for (int i = 1; i < size - 1; i++)
    {
        int x = 0;
        x=min(leftboundry(i),rightboundry(i))-arr[i];
        if (x>0)
        {
            sum+=x;
        }
        else
        {
            continue;
        }
        
    }
}
void RainWater::show()
{
    cout << "total rain trapped =" << sum << endl;
}
int main()
{
    RainWater obj(5);
    obj.getin();
    cout<<endl;
    obj.calculate();
    obj.show();
    return 0;
}