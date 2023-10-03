#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int k;
    cin>>k;
    while (k--)
    {
        stack<char>st;
        stack<char>r;
        int n;
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            char d;
            cin>>d;
            if(!st.empty()){
                char t=st.top();
                if((t== 'R'&& d== 'B')|| (t == 'B'&& d== 'R') )
                {
                    st.pop();
                    st.push('P');
                    continue;
                }
                else if((t== 'R'&& d== 'G')||(t == 'G'&& d== 'R'))
                {
                    st.pop();
                    st.push('Y');
                    continue;

                }
                else if((t== 'B'&& d== 'G') || (t== 'G'&& d== 'B'))
                {
                    st.pop();
                    st.push('C');
                    continue;
                }
                else if(t==d)
                {
                    st.pop();
                    continue;

                }
            }
                st.push(d);
        }
        while(!st.empty())
        {
             if(!r.empty() && st.top()==r.top())
             {
             r.pop();
            }
             else
             {
                r.push(st.top());
             }
             st.pop();
        }
        while(!r.empty())
        {
            cout<<r.top();
            r.pop();
        }
        
        cout<<endl;
        
    }
    
    return 0;
}