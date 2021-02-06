#include <iostream>
using namespace std;

int single_element(int ar[], int ar_size);
int main()
{
    int size;
    cout << "input any odd number as size of array " << endl;
    do
    {
        cin >> size;
    } while (size % 2 == 0);
    int arr[size];
    cout << "input elements in array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "single element in array is:" << single_element(arr, size);
    return 0;
}

int single_element(int ar[], int ar_size)
{
    int r = 0;
    for (int i = 0; i < ar_size; i++)
    {
        r = r ^ ar[i];
    }
    return r;
}