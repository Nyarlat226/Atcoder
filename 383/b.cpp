#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int h, w, d;
  cin >> h >> w >> d;
  vector<vector<char>> a(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];
  set<pair<int, int>> s;
  rep(i, h) rep(j, w) if (a[i][j] == '.') s.insert({i, j});
  int max_ans = 0;
  for (int i = 0; i < s.size(); i++)
  {
    int ans = 0;
    int dis = 0;
    for (int j = 0; j < s.size(); j++)
    {
      for (int k = 0; k < s.size(); k++)
      {
        if (((abs(s[i].first - s[k].first) + abs(s[i].second - s[k].second)) <= d) || ((abs(s[j].first - s[k].first) + abs(s[j].second - s[k].second)) <= d))
        {
          ans++;
        }
        if (ans > max_ans)
        {
          max_ans = ans;
        }
      }
    }
  }
  return 0;
}
