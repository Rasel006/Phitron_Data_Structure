#include<bits/stdc++.h>
using namespace std;
int main ()
{
    queue<string> q;
    int Q;
    cin>>Q;
    while (Q--)
    {
     
        int x; 
        
        cin >> x ;

        if (x == 0) {
            string nm;
            cin>>nm;
            q.push(nm);
        }
        else if (x == 1) {
            if (q.empty()) {
                cout << "Invalid" << endl;
            }
            else {
                string y = q.front();
                cout << y << endl;
                q.pop();
            }
        }
     
    }
    // while (!q.empty())
    // {
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }
    
    
    return 0;
}