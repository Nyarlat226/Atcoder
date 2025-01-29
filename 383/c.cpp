#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, -1, 0, 1};

int main()
{
  int h, w, d;
  cin >> h >> w >> d;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  const int INF = 1001001001;
  vector<vector<int>> dist(h, vector<int>(w, INF));
  queue<P> q;
  rep(i, h) rep(j, w)
  {
    if (s[i][j] == 'H')
    {
      dist[i][j] = 0;
      q.emplace(i, j);
    }
  }

  while (q.size())
  {
    auto [i, j] = q.front();
    q.pop();
    int d = dist[i][j];
    rep(v, 4)
    {
      int ni = i + dx[v], nj = j + dy[v];
      if (ni < 0 || ni >= h || nj < 0 || nj >= w)
        continue;
      if (s[ni][nj] == '#')
        continue;
      if (dist[ni][nj] != INF)
        continue;
      dist[ni][nj] = d + 1;
      q.emplace(ni, nj);
    }
  }
  int ans = 0;
  rep(i, h) rep(j, w)
  {
    if (dist[i][j] <= d)
      ans++;
  }
  cout << ans << endl;
  return 0;
}
