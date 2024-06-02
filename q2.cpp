#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string input){
    stack<char> s;
    for(int i=0;i<input.length();i++)
    {
            if(input[i] == ' ') {
            continue;
        }
        if(input[i]=='(' || input[i] == '{' || input[i] == '['){
            s.push(input[i]);
            continue;
        }
        if(s.empty()){
            return false;
        }
        switch (input[i])
        {
        case ')':
            if(s.top()=='('){
                s.pop();
            }
            else{
                return false;
            }
            break;   
        case '}':
                if(s.top()=='{'){
                s.pop();
            }
            else{
                return false;
            }
            break;

        case ']':
                if(s.top()=='['){
                s.pop();
            }
            else{
                return false;
            }
            break;
        }
    }
    return(s.empty());
}
int main(){
    int testCases;
    cin>>testCases;
    for(int i=0;i<testCases;i++){
        string input;
        cin>>input;
        bool ans = isValid(input);
        if(ans){
            cout<<"true"<<endl;

        }
        else{
            cout<<"false"<<endl;
        }
    }
}