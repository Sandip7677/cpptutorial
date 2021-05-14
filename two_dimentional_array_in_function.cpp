#include<iostream>
using namespace std;
#define m 7
void print(int array[][m],int n){
    for (int  i = 0; i <i; i++)
    {
        for(int j=0;j<m;j++){
            cout<<*(*(array+i)+j)<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int arr[5][m];
    cout<<"inpt values in array"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    print(arr,5);
    return 0;
}