#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char> st;
	string newStr;
	for(int i = 0; i < s.size(); i++)
	{
		st.push(s[i]);
	}
	while(!st.empty())
	{
		newStr.push_back(st.top());
		st.pop();
	}
	return newStr;
}