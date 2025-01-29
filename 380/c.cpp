#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  vector<pair<char, int>> rle;
  for (char c : s)
  {
    if (rle.size() && rle.back().first == c)
      rle.back().second++;
    else
      rle.emplace_back(c, 1);
  }
  int one = 0;
  rep(i, rle.size())
  {
    if (rle[i].first == '1')
    {
      one++;
      if (one == k)
      {
        swap(rle[i - 1], rle[i]);
      }
    }
  }
  string ans;
  for (auto [c, len] : rle)
  {
    rep(i, len) ans += c;
  }
  cout << ans << endl;
  return 0;
}
