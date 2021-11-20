#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"input size of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"input "<<n<<" element in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>array[i];
    
    int max_sum=INT_MIN;
    int cur_sum=0;
    int start=0,last=0;
    for(int i=0;i<n;i++){
        cur_sum=cur_sum+array[i];
        if(cur_sum>max_sum){
            max_sum=cur_sum;
            last=i;
        }
        if(cur_sum<0){
           cur_sum=0;
           start=i+1; 
        } 
    }

    cout<<"indexs are "<<start<<" and "<<last<<endl;
    cout<<"maximum sum of the array is "<<max_sum<<endl;
    return 0;
}