#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Take input string with space 
    // First way 
    // vector <string> v;
    // int n; cin >> n;
    // cin.ignore();
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     getline(cin, s);
    //     v.push_back(s);
    // }

    // for (int  i = 0; i < n; i++)
    // {
    //     cout << v[i]<< endl;
    // }

    // Second way to take input of an string with space 
    int n; cin >> n;
    vector <string> v(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    for (int  i = 0; i < n; i++)
    {
        cout << v[i]<< endl;
    }
    
    
     

    return 0;
}