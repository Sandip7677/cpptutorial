#include<iostream>
using namespace std;

class factorial{
    int n;
    public:
    int fac(int a){
        n=a;
        if (n==0 || n==1)
        {
            return 1;
        }
        return n*fac(n-1);
        // int x= n*fac(n-1);
        // cout<<"factorial of given no is "<<x<<endl;
    }
};
int main(){
    factorial obj;
    cout<<"factorial of given number is "<<obj.fac(6)<<endl;
    return 0;
}