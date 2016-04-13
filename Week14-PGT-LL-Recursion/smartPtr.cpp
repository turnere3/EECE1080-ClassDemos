#include <iostream>
#include <memory>

using namespace std;

struct node_t{
  int data;
  shared_ptr<node_t> next;
};

void print(shared_ptr<node_t> node){
  while(node != NULL){
    cout << node->data << ", ";
    node = node->next;
  }
  cout << endl;
}

shared_ptr<node_t> prepend(shared_ptr<node_t> node, int value){
  shared_ptr<node_t> head(new node_t);
  head->next = node;
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
