// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define int long long
const int N = 100010;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    int n, m, a, b; cin >> n >> m >> a >> b;
    if ((n * m) & 1) {
        cout << "No\n";
        return ;
    }
    if (!a && !b) {
        if (n == 1 && m == 2 || n == 2 && m == 1) cout << "Yes\n";
        else cout << "No\n";
    }
    else if (a && b) cout << "Yes\n";
    else if (!a && b) {
        cout << "Yes\n";
    } else {
        if (n == 1 && m % 2 == 0 || m == 1 && n % 2 == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}