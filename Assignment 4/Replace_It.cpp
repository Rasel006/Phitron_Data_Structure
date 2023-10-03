  #include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t; 

    for(int i=0;i<t;++i)
    {
        string s,x;
        cin>>s>>x;

        int k=s.find(x);
        while(k!=-1)
        {
            s.replace(k,x.length(),"$");
            k=s.find(x,k++);
        }

        cout<<s<<endl;
    }

    return 0; 
}
