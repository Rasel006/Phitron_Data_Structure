#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack<int> st;
    queue<int> q;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0; i<m;i++){
        int val;
        cin>>val;
        q.push(val);
    }
    if(st.size()!=q.size()){
        cout<<"NO"<<endl;
    }
    else{
        bool flag=true;
        while (!st.empty())
        {
            int x = st.top();
            int y = q.front();
            if(x!=y) flag=false;
            st.pop();
            q.pop();
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }


    return 0;
}