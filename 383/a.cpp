#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> t(n);
  vector<int> v(n);
  rep(i, n) cin >> t[i] >> v[i];
  int sum = v[0];
  for (int i = 1; i < n; i++)
  {
    sum -= t[i] - t[i - 1];
    if (sum < 0)
      sum = 0;
    sum += v[i];
  }
  cout << sum << endl;
  return 0;
}
