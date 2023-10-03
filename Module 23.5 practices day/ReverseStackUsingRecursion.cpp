void insertAtBottom(stack<int>& s, int item) 
{
    if (s.empty()) 
    {
        s.push(item);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertAtBottom(s, item);
    s.push(topElement);
}
void reverseStack(stack<int> &s) 
{
    if(s.empty()) return;
    int x = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, x);
}