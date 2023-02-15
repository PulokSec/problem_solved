#include <bits/stdc++.h>
using namespace std;

class node {
  public:
  int value;
  node * next;
};
class LinkedList {
  public:
  node * head;
  int size = 0;
  LinkedList(){
    head = NULL;
    size = 0;
  }
  
  //Create a new node where data = value and next = NULL
  node * CreateNewNode(int value) {
    node * newNode = new node;
    newNode->value = value;
    newNode->next = NULL;
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

    //if head is not NULL
    a->next = head;
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
//get size O(n)
// int getSize()
//   {
//     int count = 0;
//     node *current = head;
//     while (current != NULL)
//     {
//       count++;
//       current = current->next;
//     }
//     return count;
//   }
  //get size O(1)
  int getSize()
  {
    return size;
  }
  //Print the Linked list
  void Traverse(){
    node * a = head;
    while(a != NULL){
      cout << a->value << " ";
      a = a->next;
    }
    cout << "\n";
  }
  
  int SearchDistinctValue(int value){
    node * a = head;
    int idx = 0;
    while(a != NULL){
      if(a->value == value){
        return idx;
      }
      a = a->next;
      idx++;
    }
    return -1;
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
  void SearchAllValue(int value){
    node * a = head;
    int idx = 0;
    while(a != NULL){
      if(a->value == value){
        cout << value << "is found at " << idx << endl;
      }
      a = a->next;
      idx++;
    }
  }
};

int main() {
  LinkedList l;
  l.InsertAtHead(99);
  l.InsertAtHead(2);
  l.InsertAtHead(4);
  l.InsertAtHead(16);
  l.InsertAtHead(6);
  l.traverse();
  return 0;
}