#include <iostream>

using namespace std;

struct node_t{
  int value;
  node_t* next;
};

int size(node_t* node){
  int count = 0;
  while(node){
    node = node->next;
    count++;
  }
  return count;
}

int sizeR(node_t* node){
  if(node == NULL)return 0;
  return sizeR(node->next) + 1;
}

void print(node_t* node){
  int count = 0;
  while(node){
    cout << count << ": " << node->value << ", ";
    node = node->next;
    count++;
  }
  cout << endl;
}

node_t* push_front(node_t* node, int value){ // returns the new head
  node_t* temp = new node_t;
  temp->value = value;
  temp->next = node;
  return temp;
}

void push_back(node_t* node, int value){
  if(node == NULL){
    cout << "you can't use push_back on an empty list!\n";
    return;
  }
  node_t* temp = new node_t;
  temp->value = value;
  temp->next = NULL;
  while(node->next){
    node = node->next;
  }
  // node now is the last node in the LL because it's next is null
  node->next = temp;
}

int main(){
  node_t* head = NULL;
  // The ugly way to make a LL
  /*
  head = new node_t;
  head->value = 5;
  head->next = NULL;
  node_t* temp = new node_t;
  temp->value = 66;
  temp->next = NULL;
  //head->next = temp;  // Put 66 at end
  temp->next = head;
  head = temp;
  */
  
  //head = push_front(head, 78);
  //head = push_front(head, 3);
  head = push_front(head, 23);
  push_back(head,99);

  cout << "size: " << sizeR(head) << endl;
  print(head);
  return 0;
}
