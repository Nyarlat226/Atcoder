#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);
  ll a_max = -1e9, b_max = -1e9;

  rep(i, n)
  {
    cin >> a[i];
  }
  rep(i, n)
  {
    cin >> b[i];
  }
  rep(i, n)
  {
    if (a[i] > a_max)
    {
      a_max = a[i];
    }
    if (b[i] > b_max)
    {
      b_max = b[i];
    }
  }
  cout << a_max + b_max;
  return 0;
}
