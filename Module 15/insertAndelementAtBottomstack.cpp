// // coding nijja 
// #include <bits/stdc++.h> 
// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
//     // creating a new stack 
//     stack <int> Newst;

//     while (!myStack.empty()){
//         Newst.push(myStack.top());
//         myStack.pop();
//     }

//     Newst.push(x);

//     while (!Newst.empty()){
//         myStack.push(Newst.top());
//         Newst.pop();
//     }
//     return myStack;

// }