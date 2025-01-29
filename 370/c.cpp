#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string s, t;
  cin >> s >> t;
  int n = s.size();
  vector<string> x;

  int ans = 0;
  while (s != t)
  {
    string best;
    rep(i, n) if (s[i] != t[i])
    {
      string ns = s;
      ns[i] = t[i];
      if (best == "")
        best = ns;
      else
        best = min(best, ns);
    }
    s = best;
    x.push_back(s);
  }

  cout << x.size() << endl;
  for (string s : x)
  {
    cout << s << endl;
  }
  return 0;
}
