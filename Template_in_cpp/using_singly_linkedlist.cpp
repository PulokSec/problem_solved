#include <bits/stdc++.h>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node * nxt;
};

template <class T>
class SinglyLinkedList
{
public:
    node<T> *head;
    int sz;
    SinglyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> * CreateNewNode(T data)
    {
        node<T> * newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        head = newnode;
    }
    //Deletes the value at head. O(1)
    void DeleteAtHead()
    {
        if(head== NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;
        head= b;
        sz--;
    }
    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }
};

//Stack using singly linked list
template <class T>
class Stack
{
public:
    SinglyLinkedList<T> sl;

    Stack()
    {

    }

    T top()
    {
        if(sl.getSize()==0)
        {
            cout<<"Stack empty!\n";
            T a;
            return a;
        }
        return sl.head->data;
    }

    void push(T val)
    {
        sl.InsertAtHead(val);
    }

    void pop()
    {
        if(sl.getSize()==0)
        {
            cout<<"Stack empty!\n";
            return;
        }
        sl.DeleteAtHead();
    }
};

int main()
{
    Stack <double> st;
    st.push(4.5);
    st.push(7.2);
    st.push(9.8);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    Stack<char> st2;
    st2.push('a');
    st2.push('b');
    st2.push('c');
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    return 0;
}