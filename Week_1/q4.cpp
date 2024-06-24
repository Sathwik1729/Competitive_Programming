#include<iostream>
using namespace std;
int main(){
    int testCases;
    cin>>testCases;
    int final_ans[testCases];
    for(int a=0;a<testCases;a++){
           int n;
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        int best = 0, present_sum = 0;
        for (int k = 0; k < n; k++) {
             present_sum = max(array[k],present_sum+array[k]);
            best = max(best,present_sum);
        }
        final_ans[a] = best;

    }
    for(int b = 0;b<testCases;b++){
        cout<<final_ans[b]<<endl;
    }
 
}