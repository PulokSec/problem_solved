#include <bits/stdc++.h>
using namespace std;

int precedence(char ch)
{
  switch (ch)
  {
  case '-':
  case '+':
    return 1;
  case '*':
  case '/':
    return 2;
  default:
    return -1;
  }
}

bool isDigit(char digit)
{
  return (digit >= '0' && digit <= '9');
}

string infixToPostfix(string ifx)
{
  int n = ifx.size();
  stack<char> st;
  string pfx;
  for (int i = 0; i < n; i++)
  {
    if (isDigit(ifx[i]))
    {
      pfx.push_back(ifx[i]);
    }
    else if (ifx[i] == '(')
    {
      st.push('(');
    }
    else if (ifx[i] == ')')
    {
      while (st.top() != '(')
      {
        pfx.push_back(st.top());
        st.pop();
      }
      st.pop();
    }
    else
    {
      while (!st.empty() && st.top() != '(' && precedence(st.top()) >= precedence(ifx[i]))
      {
        pfx.push_back(st.top());
        st.pop();
      }
      st.push(ifx[i]);
    }
  }

  while (!st.empty())
  {
    pfx.push_back(st.top());
    st.pop();
  }
  return pfx;
}
int calculate_Postfix(string post_exp)
{
  stack<int> stack;
  int len = post_exp.length();
  for (int i = 0; i < len; i++)
  {
    if (post_exp[i] >= '0' && post_exp[i] <= '9')
    {
      stack.push(post_exp[i] - '0');
    }
    else
    {
      int a = stack.top();
      stack.pop();
      int b = stack.top();
      stack.pop();
      switch (post_exp[i])
      {
      case '+':
        stack.push(b + a);
        break;
      case '-':
        stack.push(b - a);
        break;
      case '*':
        stack.push(b * a);
        break;
      case '/':
        stack.push(b / a);
        break;
      }
    }
  }
  return stack.top();
}
int main()
{
  string infix;
  cin >> infix;
  string postfix = infixToPostfix(infix);
  int total = calculate_Postfix(postfix);
  cout << total << endl;
  return 0;
}