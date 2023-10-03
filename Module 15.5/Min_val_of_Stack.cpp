#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	stack<int> st;
	stack<int> track;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			if(st.empty())
			{
				st.push(num);
				track.push(num);
				return;
			}
			if(num <= track.top())
			{
				st.push(num);
				track.push(num);
				
			}
			else
				st.push(num);
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(st.empty()) return -1;
			int val = st.top();
			if(st.top() == track.top())
			{
				st.pop(); track.pop();
			}
			else
			{
				st.pop();
			}
			return val;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(st.empty()) return -1;
			return st.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{

			if(st.empty()) return -1;
			return track.top();
		}
};