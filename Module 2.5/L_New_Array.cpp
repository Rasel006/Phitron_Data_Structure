#include<bits/stdc++.h>
using namespace std;

int main(){
        // Take input 
        int n; cin >> n;
        vector <int> v1(n);
       
        for (int i = 0; i < n; i++)
        {
            cin>> v1[i];
        }
        
         vector <int> v2(n);
       
        for (int i = 0; i < n; i++)
        {
            cin>> v2[i];
        }
        // Assign v1 to v2 
        for (int i = 0; i < n; i++)
        {
            v2.push_back(v1[i]);
        }
        
        // print the result 
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
        
        

    return 0;
}