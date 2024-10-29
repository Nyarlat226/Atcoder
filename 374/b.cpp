#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s, t;
  cin >> s >> t;

  int n = s.size();
  int m = t.size();

  int l = max(n, m);

  rep(i, l)
  {
    if (s[i] != t[i])
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << "0" << endl;
}
