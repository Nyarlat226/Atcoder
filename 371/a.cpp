#include <bits/stdc++.h>
using namespace std;

int main()
{
  char ab, ac, bc;
  cin >> ab >> ac >> bc;
  string s;
  s += ab;
  s += ac;
  s += bc;

  if (s == "<<<" || s == ">>>")
  {
    cout << 'B' << endl;
  }
  if (s == "<>>" || s == "><<")
  {
    cout << 'A' << endl;
  }
  if (s == "<<>" || s == ">><")
  {
    cout << 'C' << endl;
  }
}
