#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Create STL list 
    list <int> myList(5,10);

// Num:1]myList.size()
// Returns the size of the list.
// cout << myList.size()<< endl;

// // Num:2]myList.max_size()
// // Returns the maximum size that the vector can hold.
// cout << myList.max_size()<< endl;

// // Num:3]myList.clear()
// // Clears the list elements. Do not delete the memory, only clear the list.
// // myList.clear();
// cout<< myList.size()<< endl;
// for(int val: myList){
    // cout << val<< " ";
// }

// Num:4]myList.clear()
// Clears the list elements. Do not delete the memory, only clear the list.
// cout<< myList.empty()<< endl;

// Num:5]myList.resize()
// Change the size of the list.
myList.resize(2);
for(int val: myList){
    cout << val<< " ";
}
cout << endl;
myList.resize(5);
for(int val: myList){
    cout << val<< " ";
}
cout << endl;
myList.resize(6,50);
for(int val: myList){
    cout << val<< " ";
}






    return 0;
}