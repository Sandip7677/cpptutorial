#include<iostream>
using namespace std;

int main(){
    int n,k;
    cout<<"input size of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"input "<<n<<" elemet in array "<<endl;
    for(int i=0;i<n;i++)
        cin>>array[i];
    
    cout<<"input what set of number you want "<<endl;
    cin>>k;
    
    int cur_sum=0;
    for(int i=0;i<k;i++)
        cur_sum= cur_sum+array[i];
    int max_sum=cur_sum;
    
    for(int i=k,j=0;i<n;i++,j++){
        cur_sum=cur_sum-array[j]+array[i];
        max_sum=max(max_sum,cur_sum);
    }

    cout<<"max sum is: "<<max_sum;
    return 0;
}