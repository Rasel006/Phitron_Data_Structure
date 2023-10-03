#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Log(n)   complexicity 10^18 can do the opration on Loop by divide or multiplue it like this the example 
    
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // O(Log(n))
    for (int i = 0; i < n; i++) // first with divide 
    {
        n = n / 2;
        cout << i << " ";
    }
    
    for (int i = 1; i < n; i*=2) // first with divide 
    {
        cout << i << " ";
    }
    
    

    return 0;
}