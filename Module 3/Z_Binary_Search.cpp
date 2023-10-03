#include<bits/stdc++.h>
using namespace std;

int main(){

    // Take input 
     int n , q; cin >> n >> q;

     int array[n];
     for (int i = 0; i < n; i++)
     {
        cin >> array[i];
     }
    
    // Sort the arry 
     sort(array, array+n);
    
    // start the qurrey and binary search
     while (q--)
     {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0 , r = n-1;

        while (l <= r)
        {
            int mid = (l+r)/2;

            if(array[mid] == x){
                flag = true;
                break;
            }
            if(x > array[mid]) l = mid + 1;
            else r = mid - 1;
        }
        if(flag == true) cout << "found"<< endl;
        else cout << "not found"<< endl;
        
     }
     
     

    return 0;
}