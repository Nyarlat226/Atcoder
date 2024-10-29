#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, q;
  cin >> n >> q;
  vector<int> t(q);
  rep(i, q)
  {
    cin >> t[i];
    t[i]--;
  }
  vector<bool> a(n);
  rep(i, n) a[i] = true;
  int cnt = n;
  rep(i, t.size())
  {
    if (a[t[i]])
    {
      a[t[i]] = false;
      cnt--;
    }
    else
    {
      a[t[i]] = true;
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
