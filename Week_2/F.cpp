#include<iostream>
#include<cmath>
using namespace std;
void merge(int array[], int const left, int const mid, int const right) {
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;

    // Create temporary arrays
    int leftArray[subArrayOne], rightArray[subArrayTwo];

    // Copy data to temporary arrays leftArray[] and rightArray[]
    for (int i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (int j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    // Merge the temporary arrays back into array[left..right]
    int indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        } else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    // Copy the remaining elements of leftArray[], if any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    // Copy the remaining elements of rightArray[], if any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

// Function to perform merge sort
void mergeSort(int array[], int const begin, int const end) {
    if (begin >= end)
        return;

    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
int main(){
        int n,d;
        cin>>n>>d;
        int nums[n];
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        mergeSort(nums,0,n-1);
        int count = 0;
        int remaining = n;
        int left = 0, right = n-1;
        int req = ceil(static_cast<double>(d) / nums[right]);
        if(req == static_cast<double>(d) / nums[right] ){
            req++;
        }
    while (remaining>=req) {
            left += req-1;
            right--;
            count++;
            remaining = remaining -req;
            req = ceil(static_cast<double>(d) / nums[right]);
            if(req == static_cast<double>(d) / nums[right] ){
            req++;
            }
    }
        std::cout<<count<<endl;

}