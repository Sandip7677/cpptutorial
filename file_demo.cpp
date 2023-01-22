#include<bits/stdc++.h>
using namespace std;
struct s{
    int p_id;
    string p_name;
    float p_content;
    float p_price;
    bool operator==(const s& t) const{
        return (this->p_id== t.p_id);
    }
};
class myhash{
    public:
        size_t operator()(const s& t) const{
            return t.p_id;
        }
};
int main(){
    unordered_set<s,myhash> a;
    fstream f;
    f.open("demo.txt",ios::in|ios::out|ios::app);
    int x;
    string str;
    float y;
    float z;
    while(1){
        cout<<"input id"<<endl;
        cin>>x;
        if(x<0)
            break;
        cout<<"input product name"<<endl;
        cin>>str;
        cout<<"input quantity"<<endl;
        cin>>y;
        cout<<"input price"<<endl;
        cin>>z;
        f<<" "<<x<<" "<<str<<" "<<y<<" "<<z<<endl;
    }
    s ob;
    while(f){
        f>>ob.p_id>>ob.p_name>>ob.p_content>>ob.p_price;
        a.insert({ob.p_id,ob.p_name,ob.p_content,ob.p_price});
    }

    for(auto g:a){
        cout<<"output"<<endl;
        cout<<g.p_id<<" "<<g.p_name<<" "<<g.p_content<<" "<<g.p_price<<endl;
    }
    f.close();
    return 0;
}





     // ob.id=10;
    // ob.str="what it will do";

    // f<<" "<<ob.id<<" "<<ob.str<<endl;
    // f<<ob; error

    // s ob1;
    // f.seekg(0,ios::beg);
    // while(getline(f,ob1.str)){
    //     f>>ob1.id;
    // getline(f,ob1.str);
    // cout<<ob1.id<<" "<<ob1.str<<endl;
    // }
    // f<<a;




    // f.seekg(0,ios::beg);
    // int in_x;
    // string in_str;
    // float in_y;
    // float in_z;

     // getline(f,ob.p_name);
        // f>>ob.p_content;
        // f>>ob.p_price;