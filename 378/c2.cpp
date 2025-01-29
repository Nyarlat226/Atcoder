#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n, -1);
  map<int, int> c;

  rep(i, n)
  {
    cin >> a[i];
    c[a[i]] = -1;
  }

  rep(i, n)
  {
    cout << c[a[i]] << ' ';
    int j = i + 1;

    while (j < n && a[j] != a[i])
    {
      j++;
    }

    if (j < n)
    {
      c[a[j]] = i + 1;
    }
    cout << endl;
  }
  return 0;
}
