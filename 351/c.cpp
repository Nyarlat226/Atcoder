#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  vector<int> st;
  rep(ni, n)
  {
    int a;
    cin >> a;
    st.push_back(a);
    while (st.size() > 1)
    {
      int x = st.back(), y = st.end()[-2];
      if (x != y)
        break;
      if (x == y)
      {
        st.pop_back();
        st.pop_back();
        st.push_back(x + 1);
      }
    }
  }
  cout << st.size() << endl;
  return 0;
}
