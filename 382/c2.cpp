#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<pair<int, int>> p(n);
  int min = 1000000000;
  rep(i, n)
  {
    cin >> a[i];
    p[i] = make_pair(a[i], i);
    if (a[i] < min)
    {
      min = a[i];
    }
  }
  sort(p.begin(), p.end());
  // reverse(p.begin(), p.end());
  rep(i, m)
  {
    int b;
    cin >> b;
    if (b < min)
    {
      cout << -1 << endl;
      continue;
    }
    int ans = 100000000;
    int j = 0;
    while (p[j].first <= b)
    {
      if (p[j].second < ans)
      {
        ans = p[j].second;
      }
      j++;
    }
    cout << ans + 1 << endl;
  }
  return 0;
}
