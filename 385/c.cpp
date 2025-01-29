#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  vector<vector<int>> ans(3010, vector<int>(3010, 0));
  rep(i, n)
  {
    h[i]--;
  }
  return 0;
}
