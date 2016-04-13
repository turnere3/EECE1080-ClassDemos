#include <iostream>

using namespace std;

class  Node_t {
   public:
   int data_item;
   Node_t* next;
};

void insert_node(Node_t * &head, Node_t *at_location, int data_item){
  Node_t *newNode = new Node_t;
  newNode->data_item = data_item;
  newNode->next = NULL;

  if(at_location == NULL){
    head = newNode;
  }
  else {
    Node_t *savePtr = at_location->next;
    at_location->next = newNode;
    newNode->next = savePtr;
  }
}

void push_back(Node_t * &head, int data_item){
  Node_t *at_location = NULL;

  if(head != NULL){
    Node_t *temptr = head;

    while(temptr->next != NULL){
      temptr = temptr->next;
    }
    at_location = temptr;
  }
  insert_node(head, at_location, data_item);
}

void  display_list_recursive(int pos, Node_t *display_me){
  if(display_me != NULL){
      cout << pos << ":" << display_me->data_item << endl;
      pos++;
      display_list_recursive(pos, display_me->next);
  }
}

void display_list_recursive(Node_t *head){

  if(head == NULL) {
    cout << "Empty List" << endl;
    return;
  }
  int pos = 0;
  display_list_recursive(pos, head);
}


void display_list_iterative(Node_t *head){

  if(head == NULL) {
    cout << "Empty List" << endl;
    return;
  }
  if(head != NULL){
    Node_t *temptr = head;

    int pos = 0;
    while(temptr != NULL){
      cout << pos << ":" << temptr->data_item << endl;
      temptr = temptr->next;
      pos++;
    }
  }
}

int max_value(Node_t *head){
}

int min_value(Node_t *head){
}

int sum_list(Node_t *head){
}

int main(){

  Node_t *head = NULL;

  push_back(head, 89);
  push_back(head, 9);
  push_back(head, 6);
  push_back(head, 67);

  display_list_iterative(head);
  
  //cout << pop_front(head) << endl;
  //cout << pop_front(head) << endl;

  display_list_iterative(head);

  //push_front(head, 655);

  display_list_recursive(head);

  cout << "Max Value: " << max_value(head) << endl;
  cout << "Min Value: " << min_value(head) << endl;
  cout << "Sum of Data Values: " << sum_list(head) << endl;

  return 0;
}

