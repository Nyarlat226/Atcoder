#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  vector<int> l(n);
  vector<int> r(n);

  ll suml = 0, sumr = 0;

  rep(i, n)
  {
    cin >> l[i] >> r[i];
    suml += l[i];
    sumr += r[i];
  }

  if (suml > 0 || sumr < 0)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  vector<int> ans = l;
  ll rem = -suml;
  rep(i, n)
  {
    ll canAdd = r[i] - l[i];
    if (canAdd < rem)
    {
      ans[i] = r[i];
      rem -= r[i] - l[i];
    }
    else
    {
      ans[i] += rem;
      break;
    }
  }
  rep(i, n)
  {
    cout << ans[i] << endl;
  }
  return 0;
}
