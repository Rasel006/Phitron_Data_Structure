#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>>bd;
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int v;
        cin>>v;
        bd.push(v);
    }

    int s;
    cin>>s;
    while(s--)
    {
        int val;
        cin>>val;
        if(val==0)
        {
            int v;
            cin>>v;
            bd.push(v);
            if(!bd.empty())
            {
                cout<<bd.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(val==1)
        {
            if(!bd.empty())
            {
                cout<<bd.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(val==2)
        {
            if(!bd.empty())
            {
                bd.pop();
                if(!bd.empty())
                {
                    cout<<bd.top()<<endl;
                }
                else
                {
                    cout<<"Empty"<<endl;
                }
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}