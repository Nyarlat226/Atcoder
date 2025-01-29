#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  x--;
  y--;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  string t;
  cin >> t;
  set<pair<int, int>> st;
  rep(i, t.size())
  {
    if (t[i] == 'L' && y > 0 && s[x][y - 1] != '#')
    {
      y--;
      if (s[x][y] == '@')
      {
        st.insert({x, y});
      }
    }
    if (t[i] == 'D' && x < h - 1 && s[x + 1][y] != '#')
    {
      x++;
      if (s[x][y] == '@')
      {
        st.insert({x, y});
      }
    }
    if (t[i] == 'U' && y > 0 && s[x - 1][y] != '#')
    {
      x--;
      if (s[x][y] == '@')
      {
        st.insert({x, y});
      }
    }
    if (t[i] == 'R' && y < w - 1 && s[x][y + 1] != '#')
    {
      y++;
      if (s[x][y] == '@')
      {
        st.insert({x, y});
      }
    }
  }

  cout << x + 1 << ' ' << y + 1 << ' ' << st.size() << endl;
  return 0;
}
