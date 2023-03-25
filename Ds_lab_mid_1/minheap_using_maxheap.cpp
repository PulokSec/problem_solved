#include <bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int>nodes;

    MaxHeap()
    {

    }

    //O(logn)
    void up_heapify(int idx)
    {
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx] , nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    //O(logn)
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }

    //O(n)
    void PrintHeap()
    {
        for(int i=0;i<nodes.size();i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }

    //O(logn)
    void down_heapify(int idx)
    {
        while(1)
        {
            int largest = idx;
            int l = 2*idx + 1;
            int r = 2*idx + 2;
            if(l<nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if(largest==idx)
                break;
            swap(nodes[idx] , nodes[largest]);
            idx = largest;
        }

    }

    //O(logn)
    void Delete(int idx)
    {
        if(idx >= nodes.size())
            return;
        swap(nodes[idx] , nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    //O(1)
    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }

    //O(logn)
    int ExtractMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }
};

class MinHeap{
public:
    MaxHeap mx;
    
    void insert(int x)
    {
        mx.insert(-x);
    }
    void Delete(int idx)
    {
        mx.Delete(idx);
    }
    int getMin()
    {
        int max_value = mx.getMax();
        return -max_value;
    }
};

int main()
{
    MinHeap mn;
  mn.insert(10);
  mn.insert(2);
  mn.insert(7);
  mn.insert(3);
  mn.insert(8);

  cout << mn.getMin() << endl;
    return 0;
}