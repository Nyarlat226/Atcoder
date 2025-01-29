#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  vector<int> l(n);
  vector<int> r(n);

  ll suml = 0, sumr = 0;

  rep(i, n)
  {
    cin >> l[i] >> r[i];
    suml += l[i];
    sumr += r[i];
  }

  if (suml > 0 || sumr < 0)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  rep(i, n)
  {
    if (r[i] - l[i] + suml <= 0)
    {
      suml += r[i] - l[i];
      l[i] = r[i];
    }
    else
    {
      l[i] += -suml;
      break;
    }
  }
  rep(i, n)
  {
    cout << l[i] << endl;
  }
  return 0;
}
