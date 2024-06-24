#include<iostream>
using namespace std;
int main(){
    int testCases, n,k;
    cin>>testCases;
    int final_ans[testCases];
    for(int j=0;j<testCases;j++){
        cin>>n>>k;  //n is the length of the array and k is the min sum
        int nums[n];
        int answer = -1;
        //int sum = 0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            //sum += nums[i];
            if(nums[i]>=k){
                answer = 1;
            }
        }
        if (answer==1)
        { 
        final_ans[j]=answer;
        }
        else{
            int temp = 2;
            while (temp<=n)
            {
                for(int a =0;a<n-temp+1;a++){
                    int temp_sum = 0;
                    for(int l=a;l<a+temp;l++){
                        temp_sum += nums[l];
                    }
                    if(temp_sum>=k){
                        answer = temp;
                        break;
                    }
                }
                if(answer != -1){
                    break;
                }
                temp++;

            }
            
            final_ans[j]=answer;
        }
        
        
        
    }
    for(int i=0;i<testCases;i++){
        cout<<final_ans[i]<<endl;
    }

}