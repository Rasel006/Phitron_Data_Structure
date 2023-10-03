#include<bits/stdc++.h>
using namespace std;

int main(){

    //  IN n^2 time complexcity in can do only 10^3 oparatoin this used in nested loops

    int n; 
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) //This called N^2 time complex  
        {
            cout << j << " ";
        }
        cout << endl;
        
    }
    
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j < m; j++) //This called N^M two are same time complex  
    //     {
    //         cout << j;

    //     }
        
    // }
    

    return 0;
}