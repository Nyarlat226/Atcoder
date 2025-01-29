#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
  int n = 5;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<pair<int, string>> ranking;

  for (int s = 1; s <= 31; s++)
  {
    string name;
    int score = 0;
    rep(i, n)
    {
      if (s >> i & 1)
      {
        score += a[i];
        name += 'A' + i;
      }
    }
    ranking.emplace_back(-score, name);
  }

  sort(ranking.begin(), ranking.end());
  for (auto [score, name] : ranking)
  {
    cout << name << endl;
  }
  return 0;
}
