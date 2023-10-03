#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;
    queue<int> qu;
    for(int i = 1; i <= k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    for(int i = 1; i <= k; i++)
    {
        qu.push(st.top());
        st.pop();

    }
    while(!q.empty())
    {
        qu.push(q.front());
        q.pop();
    }

    return qu;
}