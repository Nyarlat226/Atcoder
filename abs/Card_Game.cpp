#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> card(n);
  rep(i, n)
  {
    cin >> card[i];
  }
  sort(card.rbegin(), card.rend());
  int alice = 0, bob = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      alice += card[i];
    }
    else
    {
      bob += card[i];
    }
  }
  cout << alice - bob << endl;
  return 0;
}
