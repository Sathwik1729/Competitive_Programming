#include<iostream>
using namespace std;
int main()
{
    int testCases;
    cin>>testCases;
    int final_ans[testCases];
    for (int i = 0; i < testCases; i++)
    {
        int n;
        cin>>n;
        int ans = 0;
        for(int a=0;a<n;a++){
            if((a + n) == (a ^ n)){
                ans++;
            }
        }
        final_ans[i] = ans;
    }
    for(int b = 0;b<testCases;b++){
        cout<<final_ans[b]<<endl;
    }
}