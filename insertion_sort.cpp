#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input size of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"input "<<n<<" element in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>array[i];
    
    int key;
    for (int  i = 1; i < n; i++)
    {
        key=array[i];
        int k=i;
        for(int j=i-1;j>=0 && array[j]>key;j--,k--)
            array[k]=array[j];
        array[k]=key;
    }

    for (int  i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    
    return 0;
}


/* selection sort stable in decending order*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"input size of array"<<endl;
//     cin>>n;
//     int array[n];
//     cout<<"input "<<n<<" element in array"<<endl;
//     for(int i=0;i<n;i++)
//         cin>>array[i];
    
//     int max_idx;
//     for (int i = 0; i < n; i++)
//     {
//         max_idx=i;
//         for(int j=i+1;j<n;j++){
//             if(array[j]>array[max_idx])
//                 max_idx=j;
//         }
//         int key=array[max_idx];
//         while(max_idx>i){
//             array[max_idx]=array[max_idx-1];
//             max_idx--;
//         }
//         array[i]=key;
//     }
    
//     for (int  i = 0; i < n; i++)
//     {
//         cout<<array[i]<<" ";
//     }
    
    
//     return 0;
// }