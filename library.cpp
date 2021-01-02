#include <iostream>
#include <cmath>
// using std::cin;
// using std::cout;
// using std::endl;
// typedef std::cout cout_std;--->>wrong
// typedef std::endl endl_std;--->>wrong
class A
{
    int a, b;

public:
    A() {}
    A(int a, int b) : a(a), b(b)
    {
        using namespace std;
        cout << "value of a and b is:" << a << " and " << b << endl;
        cout << "value of a^b is:" << pow(a, b) << endl;
    }
    void cal()
    {
        using namespace std;
        for (int i = 0; i < 4; i++)
        {
            cout << "value of a^i is " << pow(a, i) << endl;
            cout << "value of b^i is " << pow(b, i) << endl;
        }
    }
};
int main()
{
    A a(5, 6);
    a.cal();
    return 0;
}