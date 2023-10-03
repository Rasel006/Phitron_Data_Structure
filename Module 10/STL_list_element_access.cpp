#include<bits/stdc++.h>
using namespace std;

int main(){

    //  create node 
    list <int> myList = {10,20,30,40,50};
    
// Num:1]myList.back()
// Access the tail element.
    cout<< myList.back()<< endl;
// Num:2]myList.front()
// Access the head element.
    cout<< myList.front()<< endl;
// Num:1]next(myList.begin(),i)
// Access the ith element
    cout<< *next(myList.begin(),3)<< endl;



    return 0;
}