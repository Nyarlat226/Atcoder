#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;

  int ans = 0;

  auto add = [&](int i, int co = 1)
  {
    if (i < 0)
      return;
    if (s.substr(i, 3) == "ABC")
      ans += co;
  };
  auto add3 = [&](int i, int co = 1)
  {
    add(i - 2, co);
    add(i - 1, co);
    add(i, co);
  };
  rep(i, n - 2) add(i, 1);
  rep(qi, q)
  {
    int x;
    char c;
    cin >> x >> c;
    x--;
    add3(x, -1);
    s[x] = c;
    add3(x, 1);
    cout << ans << endl;
  }
  return 0;
}
