#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  map<int, int> c;
  rep(i, n)
  {
    int a;
    cin >> a;
    int p = c[a];
    if (p == 0)
      p = -1;
    cout << p << ' ';
    c[a] = i + 1;
  }
}
