#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*in input give element for array*/

bool check_if_there(vector<int> &t,int ele){
    int count=0;
        for (auto x:t)
        {
            if (x!=ele)
            {
                count++;
            }
        }
        if (count==t.size())
        {
            return false;
        }
        else
        {
            return true;
        }
        
}
vector<int> dublicate(int arra[],int n){
    vector<int> v1;
    v1.push_back(arra[0]);
    vector<int>v2;
    vector<int>v3{-1};
    for (int i = 1; i < n; i++)
    {
       if (check_if_there(v1,arra[i]))
       {
           if (check_if_there(v2,arra[i]))
           {
               continue;
           }
           else
           {
               v2.push_back(arra[i]);
           }
       }
       else
       {
           v1.push_back(arra[i]);
       }
       
    }
    sort(v2.begin(),v2.end());
    if (v1.size()==n){
        return v3;
    }
    else{
        return v2;
    }
}
int main(){
    int x;
    cout<<"input size of array";
    cin>>x;
    int arr[x];
    for (int i = 0; i <x ; i++)
    {
        cin>>arr[i];
    }
    for(auto e:dublicate(arr,x)){
        cout<<e<<" ";
    }
    return 0;
}