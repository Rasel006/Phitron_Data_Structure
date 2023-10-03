#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Create an list 
    list <int> myList = {10,20,30,40,50};
    
// Num:1]myList= newlist
//  or myList.assign(list2.begin(),list2.end())
// Assign another list.
    list <int> newList;
    // First way to assign and the easy way 
    // newList = myList;
    // Second way to assign and the long way 
    // newList.assign(myList.begin(),myList.end());

// Num:2]myList.push_back()
// Add an element to the tail.
    myList.push_back(100);

// Num:3]myList.push_front()
// Add an element to the head.
    myList.push_front(1000);

// Num:4]myList.pop_back()
// Delete the tail.
    myList.pop_back();

// Num:5]myList.pop_front()
// Delete the head.
    myList.pop_front();

// Num:6]myList.insert()
// Insert elements at a specific position.
    myList.insert(next(myList.begin(),2),100);

// Num:7]myList.erase()
// Delete elements from a specific position.
    myList.erase(next(myList.begin(),2)); 

// Num:8]replace(myList.begin(),myList.end(),value,replace_value)
// Replace all the value with replace_value. Not under a list STL.
    replace(myList.begin(),myList.end(),20,200);
// Num:9]find(myList.begin(),myList.end(),V)
// Find the value V. Not under a list STL.
    auto it = find(myList.begin(),myList.end(),20);

    if(it == myList.end()) cout << "Not found"<< endl;
    else cout << "found"<< endl;


    // Print List 
    for(int val: myList){
        cout<< val<< endl;
    }

    return 0;
}