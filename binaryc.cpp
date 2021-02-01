#include<iostream>
using namespace std;

class binary{
    int n,r;
    float binary_cofficient;
    public:
    binary(int a,int b){
        n=max(a,b);
        r=min(a,b);
    }
    int factorial(int x){
        if (x==1 || x==0)
        {
            return 1;
        }
        return x*factorial(x-1);
    }

    void calculate(){
        binary_cofficient=factorial(n)/(factorial(r)*factorial(n-r));
        cout<<"binary cofficient is "<<binary_cofficient<<endl;
    }
};

int main(){
    binary obj(5,7);
    obj.calculate();
    return 0;
}