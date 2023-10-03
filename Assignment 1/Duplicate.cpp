#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    bool flag=false;
    for(int *it=a+1;it!=a+n;it++)
    {
        if(*it==*(it-1))
        {
            flag=true;
            break;
        }
    }

    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

