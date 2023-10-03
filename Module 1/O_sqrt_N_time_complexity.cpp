#include<bits/stdc++.h>
using namespace std;

int main(){

    //  This O(sqrt(n)) Time complexity can do 10^14 Oparation mostly used for find the divisor of any number 
    int n;
    cin >> n;
    int x = n;
    // O(sqrt(n))

    for (int i = 1; i <= sqrt(n); i++) // Using sqrt 
    {
        if(n % i == 0){
            cout << i << " ";
            if (i != sqrt(n))cout << n / i << " ";
        }
    }
cout << endl;
cout << endl;
cout << endl;
    for (int i = 1; i * i <= n; i++)  // Using math 
    {
        if(n % i == 0){
            cout << i << " ";
            if (i != sqrt(n))cout << n / i << " ";
        }
    }
    
    

    return 0;
}