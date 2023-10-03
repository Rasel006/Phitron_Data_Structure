#include<bits/stdc++.h>

using namespace std;
int main()
{
    int p;
    cin>>p;
    while(p--)
    {
        stack<char>st;
        string ss;
        cin>>ss;
        for(char s : ss)
        {
           
            
            if(!st.empty())
            {
                char t=st.top();
                if((t=='A' && s=='B')||(t == 'B' && s == 'A' ))
                {
                    st.pop();
                    continue;
                 }
               
            }
         
                st.push(s);
            
            
        }
        if(st.empty())
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    

    return 0;
}
