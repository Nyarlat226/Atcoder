/*#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  vector<int> c(n + m);
  rep(i, n) c[i] = a[i];
  rep(i, m) c[n + i] = b[i];
  sort(c.begin(), c.end());
  set<int> s(a.begin(), a.end());
  rep(i, n + m - 1)
  {
    if (s.contains(c[i]) && s.contains(c[i + 1]))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  for (auto &x : A)
    cin >> x;
  for (auto &x : B)
    cin >> x;

  auto C = A;
  for (auto x : B)
    C.push_back(x);
  sort(C.begin(), C.end());

  set<int> st(A.begin(), A.end());

  for (int i = 0; i < N + M - 1; ++i)
  {
    if (st.contains(C[i]) && st.contains(C[i + 1]))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
