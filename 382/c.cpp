#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n)
  {
    cin >> a[i];
  }
  vector<int> b(m);
  rep(i, m)
  {
    cin >> b[i];
  }
  rep(i, n - 1)
  {
    a[i + 1] = min(a[i], a[(i + 1)]);
  }
  rep(j, m)
  {
    int i = lower_bound(a.begin(), a.end(), b[j], greater<int>()) - a.begin();
    if (i == n)
    {
      cout << -1 << endl;
    }
    else
    {
      cout << i + 1 << endl;
    }
  }
  return 0;
}
