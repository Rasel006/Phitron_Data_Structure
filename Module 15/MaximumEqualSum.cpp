// // coding nijja 
// #include <bits/stdc++.h> 

// int sumOfStack(stack<int> st){
//     int sum = 0;
//     while(!st.empty()){
//         sum+= st.top();
//         st.pop();
//     }
//     return sum;

// }
// int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3) {
//     // sums
//     int sum1 = sumOfStack(stk1);
//     int sum2 = sumOfStack(stk2);
//     int sum3 = sumOfStack(stk3);

//     // find the possible sum 
//     while (true){

//         if(sum1 == sum2 && sum2 == sum3) break;

//         if(sum1 >= sum2 && sum1 >= sum3){

//             sum1 -= stk1.top();
//             stk1.pop();
//         }
//         else if(sum2 >= sum1 && sum2 >= sum3){
//             sum2 -= stk2.top();
//             stk2.pop();
//         }
//         else{
//             sum3 -= stk3.top();
//             stk3.pop();
//         }
//     }
//     return sum1;

// }
