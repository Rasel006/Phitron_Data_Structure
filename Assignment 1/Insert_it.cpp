#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for (int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cin >>x;
    int c[n+m];
    int index=0;
    for(int i=0;i<x;i++)
    {
        c[index]=a[i];
        index++;
    }
    for(int i=0;i<m;i++)
    {
        c[index]=b[i];
        index++;
    }

    for(int i=x;i<n;i++)
    {
        c[index]=a[i];
        index++;
    }


    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    return 0;
}
