#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Take input String like this 
    // First way 
    // vector <string> v;
    // int n; cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin >> s;
    //     v.push_back(s);
    // }

    // for (string val: v)
    // {
    //     cout << val << " ";
    // }
    

    // Second way input string like this 
    int n; cin >> n;
    vector <string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(string val : v){
        cout << val << " ";
    }
    



    return 0;
}