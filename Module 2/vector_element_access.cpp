#include<bits/stdc++.h>
using namespace std;

int main(){

     vector <int> (v) = {1,2,23,34,3,43};
      
    //   access vale with the easyest ways 
    cout <<" Access the firt elemnt of the vector " << v[0]<< endl;
    cout <<" Access the last elemnt of the vector " << v.back()<< endl;

    // access value with the hardest ways 
    cout <<" Access the first elemnt of the vector " << v.at(0)<< endl;
    cout <<" Access the first elemnt of the vector " << v.front()<< endl;
    cout <<" Access the last elemnt of the vector " << v[v.size() - 1]<< endl;



    return 0;
}