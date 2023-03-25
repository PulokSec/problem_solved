#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int value;
  Node *nxt;
  Node *prv;
};

class LinkedList
{
public:
  Node *head;
  Node *tail;

  LinkedList()
  {
    head = NULL;
    tail = NULL;
  }
  // Creates a new Node with the given value and returns it O(1)
  Node *CreateNewNode(int value)
  {
    Node *newNode = new Node;
    newNode->value = value;
    newNode->nxt = NULL;
    newNode->prv = NULL;
    return newNode;
  }

  // insert at head O(1)
  void insertHead(int value)
  {
    Node *newNode = CreateNewNode(value);

    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->nxt = head;
      head->prv = newNode;
      head = newNode;
    }
  }

  // Insert at tail O(1)
  void insertTail(int value)
  {
    Node *newNode = CreateNewNode(value);

    if (tail == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      tail->nxt = newNode;
      newNode->prv = tail;
      tail = newNode;
    }
  }

  // insert at mid O(n)
  void insertMid(int value)
  {
    Node *newNode = CreateNewNode(value);

    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      Node *prvMid = head;
      Node *nxtMid = head->nxt;

      while (nxtMid != NULL && nxtMid->nxt != NULL)
      {
        prvMid = prvMid->nxt;
        nxtMid = nxtMid->nxt->nxt;
      }

      newNode->nxt = prvMid->nxt;
      newNode->prv = prvMid;
      if (prvMid->nxt != NULL)
      {
        prvMid->nxt->prv = newNode;
      }
      prvMid->nxt = newNode;
    }
  }

  // print O(n)
  void print()
  {
    Node *current = head;
    while (current != NULL)
    {
      cout << current->value << " ";
      current = current->nxt;
    }
    cout << endl;
  }

  // merge O(1)
  void Merge(LinkedList &secondList)
  {
    if (secondList.head != NULL)
    {
      if (head == NULL)
      {
        head = secondList.head;
        tail = secondList.tail;
      }
      else
      {
        tail->nxt = secondList.head;
        secondList.head->prv = tail;
        tail = secondList.tail;
      }
    }
  }
};

int main()
{
  LinkedList a;
  LinkedList b;

  a.insertHead(1);
  a.insertTail(5);
  a.insertMid(3);
  a.insertHead(0);
  a.insertTail(10);
  a.print(); // prints  0 1 3 5 10

  b.insertHead(10);
  b.insertTail(50);
  b.insertMid(30);
  b.insertHead(9);
  b.insertTail(100);
  b.print(); // prints  9 10 30 50 100

  a.Merge(b);
  a.print(); // prints  0 1 3 5 10 9 10 30 50 100
  b.print(); // prints  9 10 30 50 100

  return 0;
}
