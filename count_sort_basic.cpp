#include <iostream>
#include <cstring>
#include<climits>
using namespace std;

void count_sort(int arr[], int n)
{
    int maxe = INT_MIN;
    for (int i = 0; i < n; i++)
        maxe = max(maxe, arr[i]);

    int count[maxe + 1] = {0};

    for (int i = 0; i < n; i++){
        int x=arr[i];
        ++count[x];
    }

    for (int i = 1; i < maxe; i++)
        count[i] += count[i - 1];

    int temp[n];

    for (int i = 0; i < n; i++)
    {
        temp[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main()
{
    int arr[] = {8, 3, 5, 1, 0, 45, 67, 2, 34, 43};
    int n = sizeof(arr) / sizeof(arr[0]);

    count_sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}