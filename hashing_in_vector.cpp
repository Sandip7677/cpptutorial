#include <iostream>
#include <vector>
#include <forward_list>
#include<math.h>
using namespace std;

int index_gen(int n)
{
    n=n+ pow(10,7);
    return n%26;
}

bool insert(vector<forward_list<int>> &v,int n){
    int index;
    index=index_gen(n);

    v[index].push_front(n);    
    return true;
   
}


int main()
{
    vector<forward_list<int>> v(26);
    int number;
    int ch;
    cout<<"how many numbers you want to input "<<endl;
    cin>>ch;
    while(ch!=0){
        cout << "input munber to inter in hash table " << endl;
        cin >> number;
        insert(v,number);
        ch--;
    }

    // for(int i=0;i<v.size();i++){
    //     for(auto x:v[i])
    //         cout<<x<<" ";
    //     cout<<endl;
    // }
    return 0;
}