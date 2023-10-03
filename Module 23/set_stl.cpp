#include<bits/stdc++.h>
using namespace std;
int main()

{

    set<int> s;
    int n;
    cin >> n; 
    while(n--) //)(nlogn)
    {
        int x;
        cin >> x;
        s.insert(x); // O(log N)
        //insert + sort; // incresing order
        //if we insert a value multiple time it will
        // remove duplicate value while insertion
    }
    /*for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it <<  " ";
    }*/
    //val searching with set
    if(s.count(100)) //O(log N)
    cout << "Available\n"; 
    else cout << "Not Avail" << endl;
    return 0;
}