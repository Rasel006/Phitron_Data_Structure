#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin>>k;
    while(k--)
    {
    vector<int>p;
    vector<int>q;
    int h;
    cin>>h;
    while(h--)
    {
        int h;
        cin>>h;
        p.push_back(h);
    }
    sort(p.begin(),p.end());
    while(!p.empty())
    {
        int h=p.back();
        p.pop_back();
        if(h!=p.back())
        {
            q.push_back(h);
        }

    }
    sort(q.begin(),q.end());
     while(!q.empty())
    {
        int h=q.back();
        q.pop_back();
       cout<<h<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}
