#include<bits/stdc++.h>
using namespace std;
int getFourthLargest(int arr[], int n)
{
    // Write your code here.
    sort(arr,arr+n,greater<int>());
    if(arr[3] > 0){
        return arr[3];
    }
    else{
        return -2147483648;
    }
}