#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input size of array "<<endl;
    cin>>n;
    int array[n];
    cout<<"input "<<n<<" element in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>array[i];
    int min_idx;

    for (int i = 0; i < n; i++)
    {
        min_idx=i;
        for(int j=i+1;j<n;j++){
            if(array[min_idx]>array[j])
                min_idx=j;
        }

        int temp=array[min_idx];
        for(;min_idx>i;min_idx--){
            array[min_idx]=array[min_idx-1];
        }
        array[i]=temp;
    }
    
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
    
    return 0;
}