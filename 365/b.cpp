#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n)
  {
    cin >> a[i];
  }

  vector<int> b = a;
  sort(b.begin(), b.end());
  int x = b[n - 2];

  rep(i, n)
  {
    if (a[i] == x)
    {
      cout << i + 1 << endl;
      break;
    }
  }
}
