#include<bits/stdc++.h>
using namespace std;

// create func 
void func(int* &p){ // if we want the same pointer as the we pass in argument than we have recive the perameter by the reference
    int * j = p;
    j = NULL;
    cout << j << endl;
    cout << p << endl; // this is the same as main func ptr

}
int main(){

     int value = 10;

     int* ptr = &value; // pointer that store the adress of value

     func(ptr); 
     cout << ptr<< endl;

    return 0;
}