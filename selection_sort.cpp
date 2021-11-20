#include<iostream>
using namespace std;

void swap(int * x,int * y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int n;
    cout<<"input number as size"<<endl;
    cin>>n;
    int array[n];
    cout<<"input "<<n<<" element in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>array[i];
    
    int min_ind;
    for (int i = 0; i < n; i++)
    {
        min_ind=i;
        for (int j = i+1; j < n; j++)
        {
            if(array[j]<array[min_ind])
                min_ind=j;
        }
        swap(&array[min_ind],&array[i]);
    }
    
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
    return 0;
}