// // with extra space

// #include<iostream>
// #include<algorithm>
// #include<vector>

// using namespace std;

// vector<vector<int>> rotate(vector<vector<int>> &v,int n){
//     vector<vector<int>> res;
//     for(int i=n-1;i>=0;i--){
//         vector<int> temp;
//         for(int j=0;j<n;j++){
//             temp.push_back(v[j][i]);
//         }
//         res.push_back(temp);
//         temp.clear();
//     }
//     return res;
// }

// int main(){
//     vector<vector<int>> v{{3,5,6},{8,4,3},{2,4,6}};
//     for(auto x:v){
//         for(auto c:x){
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
//     vector<vector<int>> res=rotate(v,v.size());
//     for(auto x:res){
//         for(auto c:x){
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }






// without  extra space

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &v,int n){
   for(int i=0;i<n/2;i++){
       for(int j=0;j<n-1-i;j++){
           int a=v[i][j];
           v[i][j]=v[j][n-1-i];
           v[j][n-1-i]=v[n-1-i][n-1-j];
           v[n-1-i][n-1-j]=v[n-1-j][i];
           v[n-1-j][i]=a;
       }
   }
   return v;
}

int main(){
    vector<vector<int>> v{{3,5,6},{8,4,3},{2,4,6}};
    for(auto x:v){
        for(auto c:x){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> res=rotate(v,v.size());
    for(auto x:res){
        for(auto c:x){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}