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
        int max_cnt=0;
       long long int max_maxnumber;

        for (long long int num:m)
        {
            mp[num]++;
           
        }
         for(auto it=mp.begin();it!=mp.end();it++)
         {
           long long int number=it->first;
            int cnt=it->second;
        if(cnt > max_cnt || (cnt == max_cnt && number > max_maxnumber))
        {
                max_cnt=cnt;
                max_maxnumber=number;
            }
    }
        cout<<max_maxnumber<< " " << max_cnt<<endl;
    }

    return 0;
}
