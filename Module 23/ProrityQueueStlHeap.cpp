#include<bits/stdc++.h>
using namespace std;
int main()

{
    //Main feature: Insert and Delete heap got sorted instantly

    /*priority_queue<int> pq; //default is max heap
    while(true)
    {
        int c;
        cin >> c;
        if(c == 0)
        {
            cout << "Enter a value: ";
            int x;
            cin >> x;
            pq.push(x); //O(log(n))
        }
        else if(c == 1)
        {
            pq.pop(); //O(logN)
            cout << "Deleted\n";
        }
        else if(c == 2)
        {
            cout << "Top val: " << pq.top() << endl;

        }
        else
            break;
    }*/

    //For min Heap
    priority_queue<int, vector<int>, greater<int>> pq;  // for min heap
    while(true) //O(N)
    {
        int c;
        cin >> c;
        if(c == 0)
        {
            cout << "Enter a value: ";
            int x;
            cin >> x;
            pq.push(x); //O(log(n))
        }
        else if(c == 1)
        {
            pq.pop(); //O(logN)
            cout << "Deleted\n";
        }
        else if(c == 2)
        {
            cout << "Top val: " << pq.top() << endl;

        }
        else
            break;
    }

    return 0;
}