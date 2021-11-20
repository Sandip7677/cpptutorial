// #include <iostream>
// using namespace std;

// class RainWater
// {
//     int *arr;
//     int size;
//     int sum = 0;

// public:
//     RainWater(int a) : size(a)
//     {
//         arr = new int[size];
//     }
//     void getin(void);
//     int rightboundry(int a);
//     int leftboundry(int b);
//     void calculate(void);
//     void show(void);
// };

// void RainWater ::getin()
// {
//     cout << "input values in array " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
// }
// int RainWater::leftboundry(int b)
// {
//     int r;
//     for (int i = b; i > 0; i--)
//     {
//        r=max(arr[i],arr[i-1]);
//     }
//     return r;
// }
// int RainWater::rightboundry(int a)
// {
//     int r;
//     for (int i = a; i < size - 1; i++)
//     {
//         r=max(arr[i],arr[i+1]);
//     }
//     return r;
// }
// void RainWater ::calculate()
// {
//     for (int i = 1; i < size - 1; i++)
//     {
//         int x = 0;
//         x=min(leftboundry(i),rightboundry(i))-arr[i];
//         if (x>0)
//         {
//             sum+=x;
//         }
//         else
//         {
//             continue;
//         }

//     }
// }
// void RainWater::show()
// {
//     cout << "total rain trapped =" << sum << endl;
// }
// int main()
// {
//     RainWater obj(5);
//     obj.getin();
//     cout<<endl;
//     obj.calculate();
//     obj.show();
//     return 0;
// }

#include <iostream>
using namespace std;

class RainWater
{
    int *arr, *arrleft, *arrright;
    int size;
    int sum = 0;

public:
    RainWater(int a) : size(a)
    {
        arr = new int[size];
        arrleft = new int[size];
        arrright = new int[size];
    }
    void getin(void);
    void rightboundry();
    void leftboundry();
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
void RainWater::leftboundry()
{
    static int maxl = arr[0];
    arrleft[0] = arr[0];
    for (int i = 1; i < size ; i++)
    {
        maxl = max(maxl, arr[i]);
        arrleft[i] = maxl;
    }
}
void RainWater::rightboundry()
{
    static int maxl = arr[size-1];
    arrright[size-1] = arr[size-1];
    for (int i = size-2; i >=0; i--)
    {
        maxl = max(maxl, arr[i]);
        arrright[i] = maxl;
    }
}
void RainWater ::calculate()
{
    for (int i = 1; i < size - 1; i++)
    {
        int x = 0;
        x = min(arrleft[i], arrright[i]) - arr[i];
        if (x > 0)
        {
            sum += x;
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
    cout << endl;
    obj.leftboundry();
    obj.rightboundry();
    obj.calculate();
    obj.show();
    return 0;
}