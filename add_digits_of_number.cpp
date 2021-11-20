#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s;
    int sum=0;
    cout<<"input any integer value"<<endl;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        sum=sum+s[i]-48;
    }
    cout<<"sum = "<<sum;
    return 0;
}