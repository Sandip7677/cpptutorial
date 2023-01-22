/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<set> 
using namespace std;

void max_ink(int arr[],int n,int k){
    multiset<int> s(arr,arr+k);
    auto it=s.end();
    it--;
    for(int i=k;i<n;i++){
        it=s.end();
        it--;
        cout<<*it<<" ";
        s.erase(arr[i-k]);
        s.insert(arr[i]);
    }
    cout<<*it<<" ";
}

int main()
{
    int arr[]={4,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    max_ink(arr,n,k);
    return 0;
}
