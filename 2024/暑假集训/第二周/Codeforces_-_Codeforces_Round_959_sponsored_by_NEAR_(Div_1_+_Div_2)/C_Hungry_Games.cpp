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
    int n, x; cin >> n >> x;
    vector<int> a(n + 1), s(n + 1);
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    vector<int> dp(n + 3);
    int ans = 0;
    for (int i = n; i >= 1; i --) {
        int l = i, r = n, res = -1;
        while (l <= r) {
            int mid = l + r >> 1;
            if (s[mid] - s[i - 1] <= x) l = mid + 1, res = mid;
            else r = mid - 1;
        }
        if (res == -1) dp[i] = dp[i + 1];
        else dp[i] = (res - i + 1) + dp[res + 2];
        ans += dp[i];
    }
    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}