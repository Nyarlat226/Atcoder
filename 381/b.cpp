#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  string s;
  cin >> s;
  if (s.size() % 2 != 0)
  {
    cout << "No" << endl;
    return 0;
  }
  set<char> st;
  for (int i = 0; i < s.size(); i += 2)
  {
    if (s[i] != s[i + 1])
    {
      cout << "No" << endl;
      return 0;
    }
    st.emplace(s[i]);
  }
  if (st.size() == s.size() / 2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
