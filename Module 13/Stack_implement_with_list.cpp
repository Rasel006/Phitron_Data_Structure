#include<bits/stdc++.h>
using namespace std;
// Create the list 
class myList {
    public:
    
    // create the list  
    list <int> myL;

    // Oparation 
    void push (int val){
        myL.push_back(val);
    }

    void pop (){
        myL.pop_back();
    }

    int top(){
        return myL.back();
    }

    int size(){
        return myL.size();
    }
    
    bool empty(){
        return myL.empty();
    }

};
int main(){

    //  Impliment 
    myList mySt;
     
    //  Take input 
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mySt.push(x);
    }

    while (!mySt.empty())
    {
        cout << mySt.top() << " ";
        mySt.pop();

    }
    
    

    return 0;
}