#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, a;
  cin >> n >> a;
  vector<int> t(n);
  rep(i, n)
  {
    cin >> t[i];
  }
  int before = 0;
  for (int j = 0; j < n; j++)
  {

    if (j == 0)
    {
      cout << t[0] + a << endl;
      before = t[0] + a;
    }
    else
    {
      if (before >= t[j])
      {
        cout << before + a << endl;
        before = before + a;
      }
      else
      {
        cout << t[j] + a << endl;
        before = t[j] + a;
      }
    }
  }
}
