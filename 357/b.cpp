#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  int u = 0, l = 0;
  for (char c : s)
  {
    if (islower(c))
      l++;
    else
      u++;
  }
  if (u > l)
  {
    for (char &c : s)
      c = toupper(c);
  }
  else
  {
    for (char &c : s)
      c = tolower(c);
  }
  cout << s << endl;
}
