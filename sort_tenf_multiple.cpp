 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
     int n;
     cin>>n;
     int arr[n];
     cout<<"iput array element"<<endl;
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     
     for(int i=n-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            if(arr[j]%10==0){
                swap(arr[j],arr[i]);
                break;
            }
        }
     }
     
     for(int i=0;i<n;i++){
         cout<<arr[i]<<endl;
     }
     return 0;
 }