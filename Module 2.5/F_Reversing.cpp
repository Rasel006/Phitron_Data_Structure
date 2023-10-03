#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input in vector 
     int n; cin >> n;

     vector<int> v(n);

     for (int i = 0; i < n; i++)
     {
        cin >> v[i];
     }
    // reverse it 
    reverse(v.begin(), v.end());
    // Print the result 
     for (int i = 0; i < n; i++)
     {
        cout << v[i] << " ";
     }
     

    return 0;
}