#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
bool check(int k, char* point) {
    unordered_set<char> m;
    for (int i = 0; i < k; i++) {
        char current_char = *point; 
        if (m.find(current_char) != m.end()) {
            return false; 
        }
        m.insert(current_char);
        point++;
    }
    return true;
}

int main(){
    int testCases;
    cin>>testCases;
    for(int i=0;i<testCases;i++){
        int k;
        cin>>k;
        int count = 0;
        string input;
        cin>>input;
        int n = input.length();
        for(int i=0;i<n-k+1;i++){
            if(check(k,&input[i])){
                count++;
            }
        }
        cout<<count<<endl;

    }
}