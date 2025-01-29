#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{

  int n;
  cin >> n;
  vector<int> a(n), c(n);
  rep(i, n) cin >> a[i] >> c[i];
  vector<int> is(n);
  rep(i, n) is[i] = i;
  sort(is.begin(), is.end(), [&](int i, int j)
       { return a[i] > a[j]; });
  vector<int> ans;
  for (int i : is)
  {
    if (ans.size() == 0 || c[ans.back()] > c[i])
    {
      ans.push_back(i);
    }
  }

  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int i : ans)
    cout << i + 1 << ' ';
  cout << endl;
  return 0;
}
