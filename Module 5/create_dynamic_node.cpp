#include <bits/stdc++.h>
using namespace std;

// create and class for the node
class Node {
public:
  int val;
  Node *next;
  // Create an constructor
  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};
int main() {

  // Create and dynamic object for the node

  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  // Now linked the a annd b with the head object node

  head->next = a; // we don't & because of a containe and  adress now
  head->next->next = b;
  // so the link is
  cout << "head <<--- a <<--- b" << endl;
  // Access all the value with the head
  cout << "head value " << head->val << endl
       << "a value " << head->next->val << endl
       << "b value " << head->next->next->val;

  return 0;
}