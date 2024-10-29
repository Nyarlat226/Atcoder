#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> board(n, vector<bool>(n, true));
    vector<int> a(m), b(m);
    rep(i, m)
    {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        board[a[i]][b[i]] = false;
        board[b[i]][a[i]] = false;
    }
    rep(i, m)
    {
        if (a[i] < n - 1)
        {
            if (b[i] < n - 2)
            {
                board[a[i] + 1][b[i] + 2] = false;
            }
            if (b[i] > 2)
            {
                board[a[i] + 1][b[i] - 2] = false;
            }
        }
        if (a[i] < n - 2)
        {
            if (b[i] < n - 1)
            {
                board[a[i] + 2][b[i] + 1] = false;
            }
            if (b[i] > 2)
            {
                board[a[i] + 2][b[i] - 1] = false;
            }
        }
        if (a[i] > 1)
        {
            if (b[i] < n - 2)
            {
                board[a[i] - 1][b[i] + 2] = false;
            }
            if (b[i] > 2)
            {
                board[a[i] - 1][b[i] - 2] = false;
            }
        }
        if (a[i] > 2)
        {
            if (b[i] < n - 1)
            {
                board[a[i] - 2][b[i] + 1] = false;
            }
            if (b[i] > 1)
            {
                board[a[i] - 2][b[i] - 1] = false;
            }
        }
    }
    long long cnt = 0;
    rep(i, n) rep(k, n) if (board[i][k]) cnt++;
    cout << cnt << endl;
    return 0;
}
