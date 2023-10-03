#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input of n and q 
     int n,q; cin >> n>> q;

    // Crearte arry and take input 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Create and prefix arry 
    long long int pre_arr[n];
    pre_arr[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pre_arr[i] = arr[i] + pre_arr[i - 1];
    }
    
    //  Start the quarry 
    for (int i = 0; i < q; i++)
    {
        long long int l, r; cin >> l >> r;
        long long int sum = 0;
        l--;
        r--;

        if (l == 0) sum = pre_arr[r];
        else sum = pre_arr[r] - pre_arr[l-1];

        cout<< sum<< endl;
        

    }
    

    return 0;
}