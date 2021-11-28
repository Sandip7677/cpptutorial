#include<iostream>
#include<deque>
using namespace std;
 
int main(){
    int arr[]={3,12,56,3,7,9,25,32,};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int i;
    deque<int> dq(k);
    for(i=0;i<k;i++){
        while((!dq.empty())&& (arr[i]>=arr[dq.back()]))
            dq.pop_back();
        dq.push_back(i);
    }

    for(;i<n;i++){
        cout<<arr[dq.front()]<<" ";
        while ((!dq.empty())&& dq.front()<=i-k)
        {
            dq.pop_front();
        }
        while ((!dq.empty())&& (arr[i]>=arr[dq.back()]))
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";
    return 0;
    }