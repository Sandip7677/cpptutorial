
// /*METHOD 1*******************************************************/
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// void merge(int arr1[],int arr2[],int n,int m){
//     for(int i=0;i<n;i++){
//         if(arr1[i]>arr2[0]){
//             swap(arr1[i],arr2[0]);
//             sort(arr2,arr2+m);
//         }
//     }
// }

// int main(){
//     int arr1[]={2,6,17,20};
//     int arr2[]={4,6,14,34};
//     int n=sizeof(arr1)/sizeof(arr1[0]);
//     int m=sizeof(arr2)/sizeof(arr2[0]);
//     merge(arr1,arr2,n,m);

//     for(int i=0;i<n;i++)
//         cout<<arr1[i]<<" ";
//     cout<<endl;

//     for(int i=0;i<m;i++)
//         cout<<arr2[i]<<" ";
//     return 0;
// }

/*METHOD 2*******************************************************/

// #include<iostream>
// using namespace std;

// void merge(int arr1[],int arr2[],int n,int m){
//     for(int i=m-1;i>=0;i--){
//         int key=arr1[n-1];
//         int j;
//         if(key >arr2[i]){
//             for(j=n-2;j>=0&& arr1[j]>arr2[i];j--)
//                 arr1[j+1]=arr1[j];
//             arr1[j+1]=arr2[i];
//             arr2[i]=key;
//         }
//         else
//             continue;
//     }
// }

// int main(){
//     int arr1[]={2,5,8,13,45};
//     int arr2[]={3,6,8,34,56};
//     int n=sizeof(arr1)/sizeof(arr1[0]);
//     int m=sizeof(arr2)/sizeof(arr2[0]);

//     merge(arr1,arr2,n,m);

//     for(int i=0;i<n;i++)
//         cout<<arr1[i]<<" ";
//     cout<<endl;

//     for(int i=0;i<m;i++)
//         cout<<arr2[i]<<" ";
//     cout<<endl;
//     return 0;
// }

/*method 3 ******************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void merge(int arr1[], int n, int arr2[], int m)
{
    int i = 0, j = 0, k = n - 1;
    while (i <= k && j < m)
    {
        if (arr1[i] < arr2[j])
            i++;
        else
            swap(arr2[j++], arr1[k--]);
    }

    sort(arr1, arr1 + n);
    sort(arr2,arr2+m);
}

int main()
{
    int arr1[] = {2, 4, 67, 96,134,178,290,298,314,356,509};
    int arr2[] = {5, 18, 45,98};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1,n, arr2, m);

    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    cout << endl;

    for (int i = 0; i < m; i++)
        cout << arr2[i] << " ";
    cout << endl;
    return 0;
}