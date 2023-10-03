#include<bits/stdc++.h>
using namespace std;

int main(){
// List Built-in Functions:
// Constructor

// Num:1] list<type>myList;
// Construct a list with 0 elements.
// list<int>mylist;
// cout << mylist.size()<< endl; // It take 12 byte

// Num:2] list<type>myList(N);
// Construct a list with N elements and the value will be garbage.
// list<int>myList(5);
// cout <<myList.size()<< endl;
// cout <<myList.front()<< endl; // first value of the list

// Num:3]list<type>myList(N,V);
// Construct a list with N elements and the value will be V.
// list<int>myList(5,10);

// Num:4]list<type>myList(list2);
// Construct a list by copying another list list2.
// list<int>list1 = {1,2,3,4,5};
// // copy list1 
// list<int>myList(list1);

// Num:5]list<type>myList(A,A+N);
// Construct a list by copying all elements from an array A of size N.
// int array[5] = {10,20,30,40,50};
// // copy array 
// list <int> myList(array,array+5);
// copy vector
vector<int> v = {10,20,30};
list <int> myList(v.begin(),v.end());

// Print the With itarator and range based
// iterator
for(auto it = myList.begin(); it !=myList.end();it++){

    cout << *it<< endl;
}
// Range based for loop 
for(int i:myList){
    cout << i << endl;
}





     

    return 0;
}