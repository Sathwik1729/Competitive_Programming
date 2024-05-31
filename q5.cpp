#include<iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    int final_ans[testCases][2];
    for(int i = 0; i < testCases; i++){
        int n, k;
        cin >> n >> k;
        int nums[n];
        for(int j = 0; j < n; j++){
            cin >> nums[j];
        }
        int ans_1 = -1;
        int ans_2 = -1;
        for(int a = 0; a < n-1; a++){
            for(int b = a+1; b < n; b++){
                if (nums[a] + nums[b] == k){
                    ans_1 = a;
                    ans_2 = b;
                    break; 
                }
            }
            if(ans_1 != -1 && ans_2 != -1)
                break; 
        }
        final_ans[i][0] = ans_1;
        final_ans[i][1] = ans_2;
    }
    for(int i = 0; i < testCases; i++){
        cout << final_ans[i][0] << " " << final_ans[i][1] << endl;
    }
}
