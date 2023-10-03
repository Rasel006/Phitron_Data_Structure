#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    // cout << v.max_size() << endl;
    //capacity
    /*cout << v.capacity() << endl;
    v.push_back(10); //capacity increases by double
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;*/
    //vector clear--->
    /*v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.clear();
    cout << v.size() <<endl;
    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    cout << v[4] << endl;*/

    //vector resize

    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.resize(2); //will print first 2 value of vector and other will be ignored
    v.resize(7); //will allocate (new-previeous) size space exatra
    v.resize(7, 100); // will fill up the extra allocated space by 100
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
/*

1. 4
2. 3
3. 2
4. 3
5. 2
6. 1
7. 4
8. 4
9. 2
10. 1


*/