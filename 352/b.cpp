#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s, t;
  cin >> s >> t;

  int si = 0;
  rep(i, t.size())
  {
    if (s[si] == t[i])
    {
      cout << i + 1 << ' ' << endl;
      si++;
    }
  }
  cout << endl;
  return 0;
}
