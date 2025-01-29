#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool judge(int x, const vector<int> &a, const vector<int> &b)
{
  vector<int> nb = b;         // b のコピーを作成
  nb.push_back(x);            // x を追加
  sort(nb.begin(), nb.end()); // ソートする
  rep(i, a.size())
  {
    if (a[i] > nb[i])
      return false; // a[i] が nb[i] を超えていれば条件を満たさない
  }
  return true; // 条件を満たしていれば true
}
int main()
{
  int n;
  cin >> n;
  vector<int> a(n), b(n - 1);
  rep(i, n) cin >> a[i];
  rep(i, n - 1) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  const int INF = 1001001001;
  int ac = INF, wa = 0;
  while (ac - wa > 1)
  {
    int wj = (wa + ac) / 2;
    if (judge(wj, a, b))
      ac = wj;
    else
      wa = wj;
  }
  if (ac == INF)
    cout << -1 << endl;
  else
    cout << ac << endl;
}
