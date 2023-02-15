#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int value;
  node *next;
};
class LinkedList
{
public:
  node *head;

  LinkedList()
  {
    head = NULL;
  }

  // Create a new node where data = value and next = NULL
  node *CreateNewNode(int value)
  {
    node *newNode = new node;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
  }

  // Insert a new value in the head
  void InsertAtHead(int value)
  {
    node *a = CreateNewNode(value);

    // head is NULL
    if (head == NULL)
    {
      head = a;
      return;
    }

    // if head is not NULL
    a->next = head;
    head = a;
  }

  // Print the Linked list
  void Traverse()
  {
    node *a = head;
    while (a != NULL)
    {
      cout << a->value << " ";
      a = a->next;
    }
    cout << "\n";
  }

  int getSize()
  {
    int count = 0;
    node *current = head;
    while (current != NULL)
    {
      count++;
      current = current->next;
    }
    return count;
  }
  int getValue(int index)
  {
    node *a = head;
    int idx = 0;
    while (a != NULL)
    {
      if (idx == index)
      {
        return a->value;
      }
      a = a->next;
      idx++;
    }
    return -1;
  }
  void printReverse()
  {
    node *a = head;
    printReverseRecursive(a);
    cout << endl;
  }
  void printReverseRecursive(node *n)
  {
    if (n)
    {
      printReverseRecursive(n->next);
      cout << n->value << " ";
    }
  }
  void swapFirst()
  {

    if (getSize() < 2)
      return;

    int x = getValue(1);
    int y = getValue(2);
    node *prevX = NULL, *currX = head;
    while (currX && currX->value != x)
    {
      prevX = currX;
      currX = currX->next;
    }

    node *prevY = NULL, *currY = head;
    while (currY && currY->value != y)
    {
      prevY = currY;
      currY = currY->next;
    }

    if (currX == NULL || currY == NULL)
      return;

    if (prevX != NULL)
    {
      prevX->next = currY;
    }
    else
    {
      head = currY;
    }
    if (prevY != NULL)
    {
      prevY->next = currX;
    }
    else
    {
      head = currX;
    }

    // Swap next pointers
    node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
  }
};

int main()
{
  LinkedList l;
  cout << l.getSize() << "\n";
  l.InsertAtHead(5);
  cout << l.getSize() << "\n";
  l.InsertAtHead(6);
  l.InsertAtHead(30);
  cout << l.getSize() << "\n";
  l.InsertAtHead(20);
  l.InsertAtHead(30);
  cout << l.getValue(2) << "\n";

  cout << l.getValue(6) << "\n";

  l.printReverse();
  l.Traverse();
  l.swapFirst();
  l.Traverse();
  l.printReverse();

  return 0;
}