#include<bits/stdc++.h>
using namespace std;

int main(){
     
     // Create vector and cout the inputted string and cout it and last print it   
   vector <int> v(26, 0);
   int i = 5;
     char ch;

   while (cin >> ch && ch != '\n')
     {
   
          v[ch - 97]++;
     }


   for (char i = 'a'; i <= 'z'; i++)
   {
     if (v[i-'a']!= 0) {cout << i << " : "<<v[i-'a']<<  endl;}
   }

   
    
    

     

    return 0;
}