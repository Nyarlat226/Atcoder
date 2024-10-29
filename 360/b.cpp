#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s, t;
  cin >> s >> t;

  for (int w = 1; w < s.size(); w++)
  {
    string ns = s;
    vector<string> ss;
    while (ns.size() > w)
    {
      ss.push_back(ns.substr(0, w));
      ns.erase(ns.begin(), ns.begin() + w);
    }

    ss.push_back(ns);

    rep(c, w)
    {
      string nt = "";
      for (string ns : ss)
      {
        if (c < ns.size())
          nt += ns[c];
      }
      if (nt == t)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
