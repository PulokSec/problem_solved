#include <bits/stdc++.h>
using namespace std;

template <class T>
// Queue using Dynamic Array
class Queue
{
public:
    T *a;
    int array_capacity;
    int l,r;
    int sz;

    Queue()
    {
        a = new T[1];
        array_capacity = 1;
        l = 0;
        r = -1;
        sz=0;
    }
    // O(1)
    void enqueue(T value)
    {
        if(sz == array_capacity)
        {
            increase_size();
        }
        r++;
        if(r == array_capacity)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    // O(1)
    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Empty Queue \n";
            return;
        }
        l++;
        if(l == array_capacity)
        {
            l = 0;
        }
        sz--;
    }
    //O(1)
    T front()
    {
        if(sz == 0)
        {
            cout<<"Empty Queue \n";
            return -1;
        }
        return a[l];
    }
    void increase_size()
    {
        T *tmp = new T[array_capacity*2];
        for(int i=0;i<array_capacity;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        array_capacity = array_capacity*2;
        delete [] tmp;
    }

    //O(1)
    int size()
    {
        return sz;
    }
};

int main()
{
    Queue<int> q;

    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);

    cout<<"Queue size : "<<q.size()<<"\n";

    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Queue size : "<<q.size()<<"\n";

    Queue<char> q2;

    q2.enqueue('a');
    q2.enqueue('b');
    q2.enqueue('c');
    q2.enqueue('d');

    cout<<"Queue size : "<<q2.size()<<"\n";

    cout<<q2.front()<<"\n";
    q2.dequeue();
    cout<<q2.front()<<"\n";
    q2.dequeue();
    cout<<q2.front()<<"\n";
    q2.dequeue();
    cout<<q2.front()<<"\n";
    q2.dequeue();

    cout<<"Queue size : "<<q2.size()<<"\n";

    return 0;
}