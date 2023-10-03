#include<bits/stdc++.h>
using namespace std;
// Create the queue with the list 
class myQueue{
    public:

    // Create the list 
    
    list <int> l;

    // Create Oparations /
    void push(int val){
         l.push_back(val);
    }

    void pop(){
        l.pop_front();
    }

    int front(){
        return l.front();
    }

    int size(){
        return l.size();
    }
    
    bool empty(){
        return l.empty();
    }
};
int main(){
    
    myQueue Q;

    // take input 
    int n; cin >> n;

    while (n--)
    {
        int x; cin >> x;
        Q.push(x);
    }

    while (!Q.empty())
    {
        cout << "The value of the queue " << Q.front() << " ";
        Q.pop();
    }
    
    
     

    return 0;
}