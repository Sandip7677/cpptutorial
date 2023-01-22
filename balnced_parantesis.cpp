#include<iostream>
#include<stack> 
#include<string>
using namespace std;

bool equle(char a,char b){
    return ((a=='('&& b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}

bool check(string c){
    stack<char> s;
    for(int i=0;i<c.length();i++){
        if(c[i]=='(' || c[i]=='[' || c[i]=='{')
            s.push(c[i]);
        else{
            if(equle(s.top(),c[i])==true){
                s.pop();
                continue;
            }
            else
                return false;
        }
    }
        return (s.empty()==true);
}

int main(){
    string c="[{}]";
    if(check(c)==true)
        cout<<"string is balanced";
    else
        cout<<"string is not balanaced";
    return 0;
}