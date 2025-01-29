#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n, r;
  cin >> n >> r;
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n)
  {
    cin >> a[i] >> b[i];
  }
  rep(i, n)
  {
    if ((r >= 1600) && (r <= 2799) && a[i] == 1)
    {
      r += b[i];
    }
    if ((r >= 1200) && (r <= 2399) && a[i] == 2)
    {
      r += b[i];
    }
  }
  cout << r << endl;
}
