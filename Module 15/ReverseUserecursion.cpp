// Coding Nijja
// void reverseStack(stack<int> &st) {
//     if(st.empty()) return;

//     int val = st.top();
//     st.pop();
//     reverseStack(st);
//     stack<int> cp;
//     while(!st.empty()){
//         cp.push(st.top());
//         st.pop();
//     }
//     cp.push(val);

//     while(!cp.empty()){
//         st.push(cp.top());
//         cp.pop();
//     }
// }