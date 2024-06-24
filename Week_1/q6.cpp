#include<iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    int final_ans[testCases];
    for(int i = 0; i < testCases; i++){
        int n;
        cin >> n;
        int nums[n];
        
        for(int j = 0; j < n; j++){
            cin >> nums[j];
        }
        int ans = nums[0];
        for(int a=0;a<n;a++){
            if (nums[a]<=nums[a+1]){
                continue;
            }
            else{
                ans = nums[a+1];
                break;
            }
        }
        final_ans[i] = ans;

    }
    for(int i = 0; i < testCases; i++){
        cout << final_ans[i] << endl;
    }
}