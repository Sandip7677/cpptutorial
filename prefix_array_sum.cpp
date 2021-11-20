#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input size of array "<<endl;
    cin>>n;
    int arr[n];
    int prefix_sum[n];
    cout<<"input "<<n<<" element in array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    prefix_sum[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }
    
    for(int i=0;i<n;i++)
        cout<<prefix_sum[i]<<endl;
    return 0;
}