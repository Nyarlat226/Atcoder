#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n, t;
  cin >> n >> t;

  vector<int> row(n), col(n);
  int dia1 = 0, dia2 = 0;
  rep(ti, t)
  {
    int a;
    cin >> a;
    a--;
    int i = a / n, j = a % n;
    row[i]++;
    col[j]++;
    if (i == j)
      dia1++;
    if (i + j == n - 1)
      dia2++;
    if (row[i] == n || col[j] == n || dia1 == n || dia2 == n)
    {
      cout << ti + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
