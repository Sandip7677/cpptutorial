/*when pivot element is right most element************************/

// #include<iostream>
// using namespace std;

// void swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int participent(int arr[],int l,int r){
//     int pi=arr[r];
//     int i=l-1;
//     for(int j=l;j<r;j++){
//         if(arr[j]<pi){
//             i++;
//             swap(&arr[i],&arr[j]);
//         }
//     }

//     swap(&arr[i+1],&arr[r]);
//     return i+1;
// }

// void quick_sort(int arr[],int l,int r){
//     if(l<r){
//         int p=participent(arr,l,r);

//         quick_sort(arr,l,p-1);
//         quick_sort(arr,p+1,r);
//     }
// }

// int main(){
//     int arr[]={3,6,1,89,3,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     quick_sort(arr,0,n-1);

//     cout<<" array after sorting is "<<endl;
//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";
    
//     return 0;
// }

/*when pivot element is left most element************************/

#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int participent(int arr[],int l,int r){
   int p=arr[l];
   int i=l;
   int j=l+1;
   for(;j<=r;j++){
       if(arr[j]<p){
           i++;
           swap(&arr[i],&arr[j]);
       }
   }
   swap(&arr[i],&arr[l]);
   return i;
}

void quick_sort(int arr[],int l,int r){
    if(l<r){
        int p=participent(arr,l,r);

        quick_sort(arr,l,p-1);
        quick_sort(arr,p+1,r);
    }
}

int main(){
    int arr[]={3,6,1,89,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    quick_sort(arr,0,n-1);

    cout<<" array after sorting is "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}

/*when pivot element is middle element************************/
// #include<iostream>
// using namespace std;

// void swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int participent(int arr[],int l,int r){
//    int i,j,mid;
//    mid=l+(r-l)/2;
//    int p=arr[mid];
//    i=l-1;
//    for(j=l;j<mid;j++){
//        if(arr[j]<p){
//            i++;
//            swap(&arr[i],&arr[j]);
//        }
//    }

//    for(j=mid+1;j<=r;j++){
//        if(arr[j]<p){
//            if(i==mid-1){
//                i=mid+1;
//                swap(&arr[i],&arr[j]);
//            }
//            else{
//                i++;
//                swap(&arr[i],&arr[j]);
//            }
//        }
//    }
//    swap(&arr[i+1],&arr[mid]);
//    return i+1;
// }

// void quick_sort(int arr[],int l,int r){
//     if(l<r){
//         int p=participent(arr,l,r);

//         quick_sort(arr,l,p-1);
//         quick_sort(arr,p+1,r);
//     }
// }

// int main(){
//     int arr[]={3,6,1,89,3,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     quick_sort(arr,0,n-1);

//     cout<<" array after sorting is "<<endl;
//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";
    
//     return 0;
// }
