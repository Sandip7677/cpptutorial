/*in this code if we take input in array in main it gives logical error but if directly initialize it ,
it gives right result */

#include <iostream>
using namespace std;

/*searching left half to find first occurance of that number x and returning that index */
int left_search(int arr[],int l,int r, int x, int n)
{
    if(l<=r){
        int mid=l+(r-l)/2;
        if((mid==0 || arr[mid-1]<x) && arr[mid]==x){
            cout<<mid;
            return mid;
        } 
        else if(arr[mid]>=x) 
            return left_search(arr,l,mid-1,x,n);
        else 
            return left_search(arr,mid+1,r,x,n);
    }
}


/*searching right half to find last occurance of that number x and returning that index */
int right_search(int arr[],int l,int r, int x, int n)
{
    if(l<=r){
        int mid=l+(r-l)/2;
        if((mid==n-1 || arr[mid+1]>x) && arr[mid]==x){
            cout<<mid;
            return mid;
        }
        else if(arr[mid]>x) 
            return left_search(arr,l,mid-1,x,n);
        else 
            return left_search(arr,mid+1,r,x,n);
    }
}

int count(int arr[],int x,int n){
    int left = left_search(arr,0,n-1, x, n);
  
    int right = right_search(arr,0,n-1, x, n);

    int result = right-left+1;
    return result;
}

int main()
{
    int array[]={1,2,2,3,3,4,4,4,5};
    int n=sizeof(array)/sizeof(array[0]);
    cout << "frequency of that number is: " << count(array,3,n);
    return 0;
}