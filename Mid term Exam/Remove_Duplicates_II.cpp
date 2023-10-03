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

    linked_list.sort();
    linked_list.unique();

    for(int val : linked_list)
    {
        cout<<val<<" ";
    }

    return 0;
}
