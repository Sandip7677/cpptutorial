#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "input an integer " << endl;
    cin >> n;
    int realvalue = n;
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        int p=pow(lastdigit,3);
        sum += p;
        n = n / 10;  
    }
    if (sum == realvalue)
    {
        cout << "given number is armstrong number" << endl;
    }
    else
    {
        cout << "given number is not armstrong number" << endl;
    }
    return 0;
}