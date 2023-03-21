#include <bits/stdc++.h>
using namespace std;
int isPalindrome(char str[], int begin, int end)
{
  if (begin < end + 1)
  {
    begin++;
    end--;
    return isPalindrome(str, begin, end);
  }

  if (begin == end)
  {
    return 1;
  }
  if (str[begin] != str[end])
  {
    return 0;
  }
  return 1;
}

int main()
{
  char inpStr[100];
  cin >> inpStr;
  int res = 0;
  int len = strlen(inpStr);
  if (len == 0)
  {
    res = 1;
  }

  else
  {
    res = isPalindrome(inpStr, 0, len - 1);
  }
  if (res == 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No";
  }
  return 0;
}