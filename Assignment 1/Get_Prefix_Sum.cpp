#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    

    for(long long int i=1;i<n;i++)
    {
        a[i]+=a[i-1];
    }

    for(long long int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
