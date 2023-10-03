#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input n and q and the n size of arry 
     int n, q; cin >> n >> q;
     
     int arr[n];
     for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
     }

    // sort the arry for bainary search 
    sort(arr,arr+n);
    
     for (int qu = 0; qu < q; qu++)
     {
        // Take input of x value 
        int x; cin >> x;        
        // Binary search
        bool flag = false;
        int L = 0, R = n-1;

        while (L <= R)
        {
            int mid_index = (L + R)/2;

            if (arr[mid_index] == x)
            {
                flag = true;
                break;
            }
            if(x > arr[mid_index]) L = mid_index + 1;
            else R = mid_index - 1;
            
        }

        // Print the result acording the flag
        if(flag == true) cout << "found"<< endl;
        else cout << "not found"<< endl; 
        
        
        
     }
     
     


    return 0;
}