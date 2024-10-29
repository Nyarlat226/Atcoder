#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  vector<char> b(m);
  rep(i, m) cin >> a[i] >> b[i];
  vector<bool> ac(n + 1);
  rep(i, m) ac[i] = false;

  for (int i = 0; i < m; i++)
  {
    if (b[i] == 'M')
    {
      if (ac[a[i]] == false)
      {
        ac[a[i]] = true;
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    else
    {
      cout << "No" << endl;
    }
  }
}
