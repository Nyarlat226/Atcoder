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
  ll t = 0;
  rep(i, n)
  {
    int x = h[i] / 5;
    t += x * 3;
    h[i] -= x * 5;
    while (h[i] > 0)
    {
      t++;
      if (t % 3 == 0)
        h[i] -= 3;
      else
        h[i]--;
    }
  }
  cout << t << endl;
  return 0;
}
