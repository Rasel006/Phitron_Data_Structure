#include<bits/stdc++.h>

using namespace std;
int main()
{
    queue<string>k;
    int Q;
    cin>>Q;
    
    while (Q--)
    {
     
        int x; 
        
        cin>>x;

        if(x==0)
        {
            string nme;
            cin>>nme;
            k.push(nme);
        }
        else if(x==1)
        {
            if(k.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                string y=k.front();
                cout<< y <<endl;
                k.pop();
            }
        }
     
    }
    
    return 0;
}