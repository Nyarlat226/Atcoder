#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int q;
  cin >> q;

  vector<ll> l(q + 5), x(q + 5);
  int front = 0,
      back = 0;
  ll tx = 0;

  rep(qi, q)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      int L;
      cin >> L;
      x[back] = tx;
      l[back] = L;
      back++;
      tx += L;
    }
    else if (type == 2)
    {
      front++;
    }
    else if (type == 3)
    {
      int k;
      cin >> k;
      k--;
      ll ans = x[front + k] - x[front];
      cout << ans << endl;
    }
  }
  return 0;
}
