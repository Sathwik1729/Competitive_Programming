#include<iostream>
using namespace std;
int main(){
    int testCases, n,m;
    cin>>testCases;
    int final_ans[testCases];
    for(int j=0;j<testCases;j++){
        cin>>n>>m;  //n is the length of the array and m is the target
        int nums[n];
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int count = 0;
        int sub_len = 1;
        while(sub_len<=n){
        for(int a=0;a<n-sub_len+1;a++){
            int num = nums[a];
            for(int b=a+1;b<a+sub_len;b++){
                num = (num^nums[b]);
            }
            if(num == m){
                count++;
            }
        }
        sub_len++;
        }
        final_ans[j] = count;
    }
    for(int l=0;l<testCases;l++){
        cout<<final_ans[l]<<endl;
    }
}