#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> d(n);
  set<int> st;

  rep(i, n)
  {
    cin >> d[i];
    st.insert(d[i]);
  }
  cout << st.size() << endl;

  return 0;
}
