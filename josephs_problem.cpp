#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l={1,5,8,4,2,6,3};
    int k;
    cout<<" input value of k "<<endl;
    cin>>k;

    auto it = l.begin();
    while(l.size()>1){
        for(int count =1;count<k;count ++){
            it++;
            if(it==l.end())
                it=l.begin();
        }

        it=l.erase(it);
        if(it==l.end())
            it=l.begin();
    }

    cout<<"last reamining vlaue is "<<*it<<endl;
    return 0;
}