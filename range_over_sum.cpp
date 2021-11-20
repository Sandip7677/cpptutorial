#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input size of array "<<endl;
    cin>>n;
    int array[n];
    int prefix_arr[n];

    cout<<"input "<<n<<" element in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>array[i];
    
    prefix_arr[0]=array[0];
    for (int i = 1; i < n; i++)
    {
        prefix_arr[i]=prefix_arr[i-1]+array[i];
    }
    
    int k;
    cout<<"how many times you want to calculate sum"<<endl;
    cin>>k;

    for(int i=1;i<=k;i++){
        int l,r;
        cout<<"input indexs "<<endl;
        cin>>l>>r;

        if(l==0)
            cout<<prefix_arr[r]<<endl;
        else
        {
            cout<<prefix_arr[r]-prefix_arr[l-1]<<endl;
        }
    }
    return 0;
}