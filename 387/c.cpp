#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

bool solve()
{
  int k;
  string s, t;
  cin >> k >> s >> t;
  if (s == t)
    return true;
  if (s.size() == t.size())
  {
    int cnt = 0;
    rep(i, s.size())
    {
      if (s[i] != t[i])
        cnt++;
    }
    return cnt <= 1;
  }
  if (s.size() < t.size())
    swap(s, t);
  if (s.size() != t.size() + 1)
    return false;
  int maxl = 0, maxr = 0;
  rep(i, t.size())
  {
    if (s[i] != t[i])
      break;
    maxl++;
  }
  for (int i = t.size() - 1; i >= 0; i--)
  {
    if (s[i + 1] != t[i])
      break;
    maxr++;
  }
  return maxl + maxr >= t.size();
}
int main()
{
  if (solve())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
