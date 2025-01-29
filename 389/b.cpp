#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  ll n;
  cin >> n;
  ll ans = 1;
  for (int i = 2; i <= n; i++)
  {
    ans = ans * i;
    if (ans == n)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
