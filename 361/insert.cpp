#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> a(n);

  rep(i, n) cin >> a[i];
  a.insert(a.begin() + k, x);
  rep(i, n + 1) cout << a[i] << " ";
  cout << endl;
}
