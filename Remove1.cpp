#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>linked_list;
    int val;

    while(true)
    {
        cin>>val;
        if(val==-1)
            break;

        linked_list.push_back(val);
    }

    list<int>unique_list;

    for(int val : linked_list)
    {
        bool duplicate=false;

        for(int unique_val : unique_list)
        {
            if(unique_val==val)
            {
                duplicate=true;
                break;
            }
        }

        if(!duplicate)
        {
            unique_list.push_back(val);
        }
    }

    unique_list.sort();

    for(int val : unique_list)
    {
        cout<<val<<" ";
    }

    return 0;
}
