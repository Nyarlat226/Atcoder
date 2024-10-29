#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int m;
  cin >> m;
  vector<int> a;
  for (int i = 10; i >= 0; i--)
  {
    int x = 1;
    rep(j, i) x *= 3;
    while (m >= x)
    {
      m -= x;
      a.push_back(i);
    }
  }

  cout << a.size() << endl;
  for (int na : a)
    cout << na << ' ';
  cout << endl;
}
/*vector<int> a(20);
int n = 1;

for (int i = 0; i < 10; i++)
{
  n++;
  int j = 0;
  while (m >= pow(3, j))
  {
    j++;
  }
  a[i] = j - 1;
  m -= pow(3, n - 1);
}
cout << n << endl;
rep(i, n)
{
  cout << a[i];
}
}*/
