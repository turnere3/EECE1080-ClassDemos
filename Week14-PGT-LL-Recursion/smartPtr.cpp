/*
  A quick Linked list implementation using smart-pointers.  These smart pointers
  do reference counting to self-destruct when needed (like Java).  Thus, no deletes
  are needed.
  
  MUST be compiled with c++11 extensions:  g++ -std=c++11 smartPtr.cpp
  
  Paul Talaga April 2016
*/
#include <iostream>
#include <memory>

using namespace std;

struct node_t{
  int data;
  shared_ptr<node_t> next;  // Rather than a node_t*, this is a 'smart' pointer to a node_t
};

void print(shared_ptr<node_t> node){
  while(node != NULL){
    cout << node->data << ", ";
    node = node->next;
  }
  cout << endl;
}

shared_ptr<node_t> prepend(shared_ptr<node_t> node, int value){
  shared_ptr<node_t> head(new node_t);  // Essentially a 'smart' pointer is a wrapper
  head->next = node;                    // around regular pointers.
  head->data = value;
  return head;
}

int main(){
  shared_ptr<node_t> head;
  head = prepend(head, 55);
  head = prepend(head,89);
  print(head);
  return 0;
}
