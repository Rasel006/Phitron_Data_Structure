#include<bits/stdc++.h>
using namespace std;

int main(){
// Take input on vector 
     int n; cin >> n;
     vector <int> v(n);
     for (int i = 0; i < n; i++)
     {
        cin >> v[i];
     }

    //  Make couter  and count 
    int cnt = 0;
    // Find the x + 1 using find 
     for (int i = 0; i < n; i++)
     {
        auto it = find(v.begin(), v.end(), v[i]+1);
        if (it == v.end()) continue;
        else cnt++;
     }
     
     cout << cnt ; // print the result 
     
    return 0;
}