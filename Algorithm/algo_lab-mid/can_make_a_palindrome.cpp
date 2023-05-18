#include <bits/stdc++.h>

using namespace std;

bool isPossiblePalindrome(string s)
{
  vector<int> freq(26, 0);

  for (char c : s)
  {
    freq[c - 'a']++;
  }

  int odd = 0;

  for (int i = 0; i < 26; i++)
  {
    if (freq[i] % 2 != 0)
    {
      odd++;
    }
  }

  return odd <= 1;
}

int main()
{
  string s;
  cin >> s;

  if (s.size() > 50 || s.size() < 1)
  {
    return 0;
  }
  if (isPossiblePalindrome(s))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
