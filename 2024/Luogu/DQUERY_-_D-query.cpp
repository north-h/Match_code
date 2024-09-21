/*
 * ==============================================================
 * Author:  north_h
 * Time:    2024-09-04 20:51:56
 *
 * Probelongem: DQUERY - D-query
 * Contest: Luogu
 * URL:     https://www.luogu.com.cn/probelongem/SP3267
 * MemoryL: 1 MB
 * TimeL:   227000 ms
 * ==============================================================
 */

// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define int long long
const int N = 1000010, INF = 0x3f3f3f3f;

using namespace std;

struct S {
    int l, r, id;
} b[N];

int a[N], belong[N], cnt[N], n, m, now, ans[N];

void add(int p) {
    if (!cnt[a[p]]) now ++;
    cnt[a[p]] ++;
}

void del(int p) {
    cnt[a[p]] --;
    if (!cnt[a[p]]) now --;
}

void solve() {
    cin >> n;
    int sz = sqrt(n), block = (n + sz - 1) / sz;
    for (int i = 1; i <= block; i ++) {
        for (int j = (i - 1) * sz + 1; j <= i * sz; j ++) {
            belong[j] = i;
        }
    }
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i ++) {
        cin >> b[i].l >> b[i].r;
        b[i].id = i;
    }
    sort(b + 1, b + m + 1, [&](S a, S b) {
        if (belong[a.l] != belong[b.l]) return belong[a.l] < belong[b.l];
        else {
            return a.r < b.r;
        }
    });
    int l = 1, r = 0;
    for (int i = 1; i <= m; i ++) {
        auto [ql, qr, qid] = b[i];
        while (l < ql) del(l ++);
        while (l > ql) add(-- l);
        while (r < qr) add(++ r);
        while (r > qr) del(r --);
        ans[qid] = now;
    }
    for (int i = 1; i <= m; i ++) {
        cout << ans[i] << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}
