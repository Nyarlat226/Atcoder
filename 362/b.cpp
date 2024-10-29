#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct Point
{
  int x, y;
  Point(int x = 0, int y = 0) : x(x), y(y) {}
  Point operator-(const Point &p) const { return Point(x - p.x, y - p.y); }
};

int norm2(Point a, Point b)
{
  Point p = b - a;
  return p.x * p.x + p.y * p.y;
}

int main()
{
  Point a, b, c;
  cin >> a.x >> a.y;
  cin >> b.x >> b.y;
  cin >> c.x >> c.y;
  int A = norm2(b, c);
  int B = norm2(a, c);
  int C = norm2(a, b);
  if (A + B == C || A + C == B || B + C == A)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
