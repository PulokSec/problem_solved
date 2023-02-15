#include <bits/stdc++.h>
using namespace std;

class node {
  public:
  int value;
  node * next;
  node * prev;
};
class DoublyLinkedList {
  public:
  node * head;
  int size = 0;
  DoublyLinkedList(){
    head = NULL;
    size = 0;
  }
  node * CreateNewNode(int value) {
    node * newNode = new node;
    newNode->value = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
  }
  //Insert a new value in the head
  void InsertAtHead(int value) {
    node * a = CreateNewNode(value);
    size ++;
    //head is NULL
    if(head == NULL){
      head = a;
      return;
    }
    node * b = head;
    a->next = b;
    b->prev = a;
    head = a;
  }
    void InsertAtIndex(int index,int value) {
    //corner case
    if(index < 0 || index > size){
      return;
    }
    //index is 0
    if(index == 0){
      InsertAtHead(value);
      return;
    }
    size++;
    //if index is not 0
    node *a = head;
    int currentIndex = 0;
    while(currentIndex != index-1){
    a = a->next;
    currentIndex++;
    }
    node *b = CreateNewNode(value);
    b->next = a->next;
    b->prev = a;
    node *c = a->next;
    c->prev = b;
    a->next = b;
  }
  void InsertAfterValue(int value) {
    //corner case
    if(index < 0 || index > size){
      return;
    }
    //index is 0
    if(index == 0){
      InsertAtHead(value);
      return;
    }
    size++;
    //if index is not 0
    node *a = head;
    int currentIndex = 0;
    while(currentIndex != index-1){
    a = a->next;
    currentIndex++;
    }
    node *b = CreateNewNode(value);
    b->next = a->next;
    a->next = b;
  }
  void ReversePrint(node * a){
    if(a == NULL){
      return;
    }
    ReversePrint(a->next);
    cout << a->value << " ";
  }
  void DeleteAtHead(){
    if(head == NULL){
      return;
    }
    size --;
    node * a = head;
    head = a->next;
    delete a;
  }
  void DeleteAtIndex(int index){
    if(index < 0 || index > size -1){
      return;
    }
    //index is 0
    if(index == 0){
      DeleteAtHead();
      return;
    }
    size--;
    //if index is not 0
    node *a = head;
    int currentIndex = 0;
    while(currentIndex != index-1){
    a = a->next;
    currentIndex++;
    }
    node *b = a->next;
    a->next = b->next;
    delete b;
  }
  void traverse()
    {
        node* a = head;
        while (a != NULL)
        {
            cout << a->value << ",";
            a = a->next;
        }
        cout << '\n';
    }
}