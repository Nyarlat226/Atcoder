#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> a(n);

  rep(i, n) { cin >> a[i]; }
  rep(j, k) cout << a[j] << " ";

  cout << x << " ";
  for (int i = k; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
