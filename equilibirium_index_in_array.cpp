#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input size of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"input "<<n<<" element in array "<<endl;
    for(int i=0;i<n;i++)
        cin>>array[i];
    int sum=0;

    for(int i=0;i<n;i++)
        sum+=array[i];
    int left_sum=0;

    for(int i=0;i<n;i++){
        sum-=array[i];
        if(left_sum==sum)
            cout<<i<<endl;
        left_sum+=array[i];
    }
    return 0;
}