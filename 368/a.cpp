#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  for (int j = n - k; j < n; j++)
  {
    cout << a[j] << ' ';
  }
  rep(i, n - k)
  {
    cout << a[i] << ' ';
  }

  cout << endl;
}
