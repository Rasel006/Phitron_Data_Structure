#include<bits/stdc++.h>
using namespace std;
// Create Stack in Array 
class myStack{

    public:
    // Impliment arry 
    vector <int> v;

    // Creating the oparations 
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v.back();
    }

    int size(){
        return v.size();
    }

    bool empty(){
        if(v.size() == 0){
            return true;
        }
        else false;
    }
};


int main(){

    //  Create normal stack 
    myStack st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);
    // st.pop();
    // st.pop();                  Normal way to implimention in stack 
    // st.pop();
    // st.pop();
    // st.pop();
    // cout << st.size()<< endl;
    // cout << st.empty()<< endl;
    // cout << st.top();


    cout << "Size and Give your values : ";

    int n; cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val; cin >> val;
        st.push(val);
    }
    
    while (!st.empty())
    {
        cout << st.top()<< " ";
        st.pop();
    }
    

    return 0;
}