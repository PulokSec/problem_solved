#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
  if (n == 0)
  {
    return 0;
  }
  int a = n % 10;
  int b = n / 10;
  return a + sumOfDigits(b);
}

int main()
{
  int n;
  cin >> n;
  if(n < 10 || n > 1000){
    return 0;
  }

  int sum = sumOfDigits(n);
  cout << sum << endl;

  return 0;
}
