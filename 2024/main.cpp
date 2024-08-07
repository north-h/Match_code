// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define int long long
const int N = 100010;
const int INF = 0x3f3f3f3f;

using namespace std;

int vis[100];

void solve() {
    int x, y; cin >> x >> y;
    if (x % y == 0) cout << y << ' ' << x / y << '\n';
    else if (y % x == 0) {
        cout << y << ' ' << 1 << '\n';
    } else {
        cout << y << ' ' << x << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}