#include<iostream>
#include<cstring>
using namespace std;

class algo{
    int size;
    bool * arr;
    public:
    algo(int a){
        size=a;
        arr=new bool[size+1];
        memset(arr,true,sizeof(size+1));
    }
    void calculate(void);
    void show(void);
};

void algo :: calculate(){
    for (int i = 2; i <= size; i++)
    {
        if (arr[i]==true)
        {
            for (int j = 2*i; j <= size; j+=i)
            {
                arr[j]=false;
            }
            
        }
        
    }
    
}

void algo :: show(){
    for (int i = 2; i <=size; i++)
    {
        if (arr[i]==true)
        {
            cout<<i<<" ";
        }
        
    }
    
}

int main(){
    cout<<"input any integer "<<endl;
    int x;
    cin>>x;
    algo obj(x);
    obj.calculate();
    obj.show();
    return 0;
}