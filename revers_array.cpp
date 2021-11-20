// time complexity o(n) spaces complexity o(d)

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"what size of array you want "<<endl;
//     cin>>n;
//     int array[n];
//     cout<<"input "<<n<<" elements in array"<<endl;
//     for (int i = 0; i <n; i++)
//     {
//         cin>>array[i];
//     }
    
//     int d;
//     cout<<"how many places you want to shift your array in left"<<endl;
//     cin>>d;

//     int arr[d];
//     for (int i = 0; i < d; i++)
//     {
//         arr[i]=array[i];
//     }
//     for (int  i = d,j=0; i < n; i++)
//     {
//         array[j++]=array[i];
//     }
//     for (int i = n-d,j=0; i < n; i++)
//     {
//         array[i]=arr[j++];
//     }
    
//     cout<<"array after reversing "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<array[i]<<endl;
//     }
    
//     return 0;
// }

/*------------------------------------------------------*/
/*------------------------------------------------------*/



//time complexity o(n*d)  space complexity o(1)

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"what size of array you want "<<endl;
//     cin>>n;
//     int array[n];
//     cout<<"input "<<n<<" elements in array"<<endl;
//     for (int i = 0; i <n; i++)
//     {
//         cin>>array[i];
//     }
    
//     int d;
//     cout<<"how many places you want to shift your array in left"<<endl;
//     cin>>d;
    
//     for (int i = 0; i < d; i++)
//     {
//         int temp=array[0];
//         for (int i = 0; i < n-1; i++)
//         {
//             array[i]=array[i+1];
//         }
//         array[n-1]=temp;
//     }
    
//     cout<<"array after reversing "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<array[i]<<endl;
//     }
    
//     return 0;
// }

/*------------------------------------------------------*/
/*------------------------------------------------------*/



// time complexity o(n)  space complexity o(1) ------------> best method
//rotate first d element 
//rotate rest n-d element
//rotate whole array and it will give resultant array

#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    for (int i = 0; i < size/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    
}
int main(){
    int n;
    cout<<"what size of array you want "<<endl;
    cin>>n;
    int array[n];
    cout<<"input "<<n<<" elements in array"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>array[i];
    }
    
    int d;
    cout<<"how many places you want to shift your array in left"<<endl;
    cin>>d;

    reverse(array,d);
    reverse(array+d,n-d);
    reverse(array,n);
    cout<<"array after reversing "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
}




