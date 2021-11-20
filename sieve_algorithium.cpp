/* print all prime number between any  two number*/

#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
    int low,high;
    cout<<"input two number between which find prime number "<<endl;
    cin>>low>>high;
    bool arr[high+1];
    memset(arr,false,sizeof(arr));
    arr[0]=true;
    arr[1]=true;
    for (int i = 2; i < sqrt(high); i++)
    {
        if(arr[i]==false){
            for (int j = i*2; j < high; j+=i)
            {
                arr[j]=true;
            }            
        }   
    }
    
    for(int i=low;i<high;i++){
        if(arr[i]==false)
            cout<<i<<endl;
    }
    return 0;
}