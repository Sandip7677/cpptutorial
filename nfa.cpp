// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<set>
// #include<string>
// #include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,unordered_map<int,vector<int>>> nfa;
    int intial;
    int final;
    int input1;
    int input2;
    cout<<"************************DFA PROGRAM***************************"<<endl;
    int n;
    cout<<"input numer of states"<<endl;
    cin>>n;
    cout<<"the states are: {";
    for(int i=0;i<n;i++){
        // nfa[i]={0,{0}};
        // nfa.insert({0,{0,{0}}});
        cout<<"q"<<i<<" ";
    }
    cout<<"}";
    
    cout<<"input initial state"<<endl;
    cout<<"q";
    cin>>intial;
    
    cout<<"input final state"<<endl;
    cout<<"q";
    cin>>final;
    
    cout<<"enter first input symbol  ";
    cin>>input1;
    
    cout<<endl<<"enter second input symbol  ";
    cin>>input2;
    
    cout<<endl<<"Input transition function "<<endl;
    cout<<"Input format for each state and input alphabet enter states it makes transiton to"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<"q"<<i<<endl;
        for(int j=1;j<=2;j++){
            cout<<"\tfor input"<<j<<endl;
            char ch='y',s='y';
            getchar();
            cout<<"Enter y if there is next transiton state to enter for current input alphabet otherwise n"<<endl;
            cin>>ch;
            if(ch=='y'){
                do{
                    int x;
                    cin>>x;
                    nfa[i][input1].push_back(x);
                    getchar();
                    cin>>s;
                }while(s=='y');
            }   
        }
    }
    
    for(auto x:nfa){
        cout<<x.first<<endl;
        for(auto y:x.second){
            cout<<"\t"<<y.first<<endl;
            for(auto z:y.second){
                cout<<"\t\t"<<z<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    string str;
    cout<<"input string to check"<<endl;
    cin>>str;
    
    set<int> v;
    set<int> ans{intial};
    
    for(int i=0;i<str.length();i++){
        for(auto x:ans){
            if(nfa[x].find(str[i])!=nfa[x].end()){
                v.insert(nfa[x][str[i]].begin(),nfa[x][str[i]].end());
            }
            else{
                ans.erase(x);
                v.erase(x);
            }
            ans.insert(v.begin(),v.end());
        }
    }
    if(ans.find(final)!=ans.end())
        cout<<"accepted";
    else
        cout<<"not accepted";
    return 0;
}