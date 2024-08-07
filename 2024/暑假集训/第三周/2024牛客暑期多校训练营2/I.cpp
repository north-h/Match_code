// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define lf(x) fixed << setprecision(x)
#define int long long
const int N = 100010;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n * 2  + 2);
    unordered_map<int, array<int, 2>> mp;
    for (int i = 1; i <= n * 2; i ++) {
        cin >> a[i];
        if (!mp.count(a[i])) {
            mp[a[i]][0] = i;
        } else {
            mp[a[i]][1] = i;
        }
    }
    vector<array<int, 3>> seg;
    for (auto [x, y] : mp) {
        seg.push_back({x, y[0], y[1]});
    }
    seg.push_back({0, 0, 2 * n + 1});
    sort(seg.begin(), seg.end(), [&](array<int, 3> a, array<int, 3> b) {
        return (a[2] - a[1]) < (b[2] - b[1]);
    });
    vector<int> f(n + 1);
    for (auto [val, l, r] : seg) {
        vector<int> dp(r + 1, 0);
        dp[l] = val;
        for (int i = l + 1; i <= r; i ++) {
            int lo = mp[a[i]][0], hi = mp[a[i]][1];
            dp[i] = max(dp[i], dp[i - 1] + val);
            if (lo > l && hi < r && i >= hi) dp[i] = max(dp[i], dp[lo - 1] + f[a[i]]);
        }
        f[val] = dp[r];
    }
    cout << f[0] << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}