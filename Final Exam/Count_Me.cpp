#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin>>k;
     cin.ignore();
    while(k--)
    {
        string snt;
        getline(cin,snt);
        stringstream ss(snt);
        map<string,int>mp;
        string word;
        int max=0;
        string max_Word;
        while(ss>>word)
        {
                mp[word]++;
                 if(mp[word]>max)
                 {
                
                    max=mp[word];
                    max_Word=word;
                
            }
        }
        cout<<max_Word<<" "<<max<<endl;
    }
    
    return 0;
}