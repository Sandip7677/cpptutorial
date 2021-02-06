#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v {45,567,34,890};
   int x=0;
   x=accumulate(v.begin(),v.end(),x);
   cout<<x;
    return 0;
}