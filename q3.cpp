#include<iostream>
using namespace std;
int main(){
    int testCases;
    cin>>testCases;
    int final_ans[testCases][2];
    for (int a = 0; a < testCases; a++)
    {
    int n,target, ans1,ans2;
    cin>>n>>target;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    bool flag=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans1 = i +1;
                ans2 = j + 1;
                flag=true;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    final_ans[a][0] = ans1;
    final_ans[a][1] = ans2;
    }
    for(int i=0;i<testCases;i++){
        cout<<final_ans[i][0]<<" "<<final_ans[i][1]<<endl;
    }
    
}