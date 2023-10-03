#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>linked_list;
    int Q;
    cin>>Q;

    while(Q--)
    {
        int X,V;
        cin>>X>>V;

        if(X<0 || X>linked_list.size())
        {
            cout<<"Invalid"<<endl;
        } 
        else 
        {
            auto it=linked_list.begin();
            advance(it,X);
            linked_list.insert(it,V);

            cout<<"L -> ";
            for(int val : linked_list)
            {
                cout<<val<<" ";
            }
            cout<<endl;

            cout<<"R -> ";
            for(auto rit=linked_list.rbegin();rit!=linked_list.rend();++rit)
            {
                cout<<*rit <<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
