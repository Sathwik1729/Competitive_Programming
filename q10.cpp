#include<iostream>
using namespace std;

int max_val(int k, int* a) {
    int max = *a;
    for(int i = 1; i < k; i++) {
        int present = *(a + i); // Change from *(a + 1 + i) to *(a + i)
        if(present > max) {
            max = present;
        }
    }
    return max;
}

int main() {
    int testCases;
    cin >> testCases;
    int final_ans[testCases];
    for(int i = 0; i < testCases; i++) {
        int n, k;
        cin >> n >> k;
        int nums[n];
        for(int j = 0; j < n; j++) {
            cin >> nums[j];
        }
        for(int a = 0; a < n - k + 1; a++) {
            cout << max_val(k, nums + a) << " ";
        }
        cout << endl;
    }
}
