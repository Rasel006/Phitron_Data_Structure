#include<bits/stdc++.h>
using namespace std;

int main(){

//  Create node of linked list 
    list <int> myList = {20,40,50,10,30,10};

// Num:1]myList.remove(V)
// Remove the value V from the list.
    // myList.remove(10);

// Num:2]myList.sort()
// Sort the list in ascending order.
    // myList.sort();

// Num:3]myList.sort(greater<type>())
// Sort the list in descending order
    // myList.sort(greater <int>());

// Num:4]myList.unique()
// Deletes the duplicate values from the list. You must sort the list first.
    // myList.unique();

// Num:5]myList.reverse()
// Reverse the list.
    myList.reverse();




            


// print the list 
for(int val: myList){
    cout << val << " ";
}





    return 0;
}