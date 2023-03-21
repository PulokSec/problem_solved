#include <bits/stdc++.h>
using namespace std;

void print(list<int> l)
{
  int n = l.size();
  int i = 0;
  auto a = l.begin();
  while (a != l.end())
  {
    cout << *a;
    a++;
    i++;
    if (i < n)
    {
      cout << ", ";
    }
  }
  cout << "\n";
}
void deleteValue(list<int> &l, int value)
{

  auto itr = find(l.begin(), l.end(), value);

  if (itr != l.end())
  {
    l.erase(itr);
  }
}
int main()
{
  list<int> lst({7, 3, 8, 4, 5, 4});
  deleteValue(lst, 4);
  print(lst);
  return 0;
}