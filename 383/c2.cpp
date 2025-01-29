#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int h, w, d;
  cin >> h >> w >> d;
  vector<vector<char>> a(h, vector<char>(w));
  vector<pair<int, int>> s;
  vector<pair<int, int>> kasi;
  set<pair<int, int>> ans;
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) rep(j, w)
  {
    if (a[i][j] == '.')
      s.push_back({i, j});
    if (a[i][j] == 'H')
    {
      kasi.push_back({i, j});
      ans.insert({i, j});
    }
  }
  cout << ans.size() << endl;
  return 0;
}
