#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Create stack Stl 
    stack <int> st;
    
    // take input 
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val; cin >> val;
        st.push(val);   
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        cout << st.size()<< endl;
        st.pop();
    }
    
    

    return 0;
}