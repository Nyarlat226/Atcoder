#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int a, b, k;
  cin >> a >> b >> k;
  int cnt = 0;
  vector<int> ans(100, 0);
  for (int i = 1; i <= min(a, b); i++)
  {
    if (a % i == 0 && b % i == 0)
      ans.push_back(i);
  }
  sort(ans.rbegin(), ans.rend());

  cout << ans[k - 1] << endl;
  return 0;
}
