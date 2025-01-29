#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '-')
    {
      ans++;
    }
    else if (s[i] == '|' && i != 0)
    {
      cout << ans << ' ';
      ans = 0;
    }
  }
  return 0;
}
