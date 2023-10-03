#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin>>k;

    while(k--)
    {
        vector<long long int>m;
        int p;
        cin>>p;
        while(p--)
        {
           long long  int r;
            cin>>r;
            m.push_back(r);
        }

        map<long long int,int>mp;
        int maxcnt=0;
       long long int max_MaxNumber;

        for (long long int num:m)
        {
            mp[num]++;
           
        }
         for(auto it=mp.begin();it!=mp.end();it++)
         {
           long long int number=it->first;
            int cnt=it->second;
        if(cnt > maxcnt || (cnt == maxcnt && number > max_MaxNumber))
        {
                maxcnt=cnt;
                max_MaxNumber=number;
            }
    }
        cout<<max_MaxNumber<< " " << maxcnt<<endl;
    }

    return 0;
}
