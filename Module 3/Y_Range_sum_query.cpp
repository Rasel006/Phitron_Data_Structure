#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input 
     int n, q ; cin >> n >> q;

     int arry[n];
     for (int i = 0; i < n; i++)
     {
        cin >> arry[i];
     }

    //  Make prefix arrry 
    long long int prefix_array[n];
    prefix_array[0] = arry[0];

    for (int i = 1; i < n; i++)
    {
        prefix_array[i] = arry[i] + prefix_array[i-1]; 
    }
    
    // Start the qurry and sum l ot r 
    while (q--)
    {
        long long int l, r;  cin >> l >> r;
        r--;
        l--;
        
        long long int sum;
        if(l == 0) sum = prefix_array[r];
        else sum =  prefix_array[r] -  prefix_array[l-1];

        cout << sum << endl;
    }
    
    



     

    return 0;
}