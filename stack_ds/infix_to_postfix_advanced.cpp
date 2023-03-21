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
bool isOperand(char ch)
{
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

string infixToPostfix(string ifx)
{
  int n = ifx.size();
  stack<char> st;
  string pfx;
  for (int i = 0; i < n; i++)
  {
    if (isOperand(ifx[i]))
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
int calculate_Postfix(string  post_exp)
{
    stack <int> stack;
    int len = post_exp.length();
    // loop to iterate through the expression
    for (int i = 0; i < len; i++)
    {
        // if the character is an operand we push it in the stack
        // we have considered single digits only here
        if ( post_exp[i] >= '0' &&  post_exp[i] <= '9')
        {
            stack.push( post_exp[i] - '0');
        }
        // if the character is an operator we enter else block
        else
        {
            // we pop the top two elements from the stack and save them in two integers
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            //performing the operation on the operands
            switch (post_exp[i])
            {
                case '+': // addition
                          stack.push(b + a);
                          break;
                case '-': // subtraction
                          stack.push(b - a);
                          break;
                case '*': // multiplication
                          stack.push(b * a);
                          break;
                case '/': // division
                          stack.push(b / a);
                          break;
                case '^': // exponent
                          stack.push(pow(b,a));
                          break;
            }
        }
    }
    //returning the calculated result
    return stack.top();
}
int main()
{
  string infix;
  cin >> infix;
  string postfix = infixToPostfix(infix);
  cout << postfix << endl;
  return 0;
}