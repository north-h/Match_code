/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2024-05-10 09:20:29
 *
 * Problem: P4513 小白逛公园
 * Contest: Luogu
 * URL:     https://www.luogu.com.cn/problem/P4513
 * MemoryL: 128 MB
 * TimeL:   1000 ms
 * ==================================================================================
 */

// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define lf(x) fixed << setprecision(x)
// #define LOCAL
const int N = 100010;
const int INF = 0x3f3f3f3f;

using namespace std;
using ll = long long;

template <class T>
struct Seg {
    struct Node { int l, r; T lazy, mx, lmx, rmx, sum; };
    vector<Node> tr; vector<T> a; int n;
    Seg(int n) {
        n = N;
        tr.resize(n * 4);
        a.resize(n);
    }
    void add(int x, T k) {
        a[x] = k;
    }
    void pushup(int u) {
        tr[u] = merge(tr[u], tr[u << 1], tr[u << 1 | 1]);
    }
    Node merge(Node &t, Node l, Node r) {
        t.lmx = max(l.lmx, l.sum + r.lmx);
        t.rmx = max(r.rmx, r.sum + l.rmx);
        t.sum = l.sum + r.sum;
        t.mx = max(max(l.mx, r.mx), l.rmx + r.lmx);
        return t;
    }
    void pushdown(int u) {
        if (tr[u].lazy) {
            tr[u << 1].lazy = max(tr[u].lazy, tr[u << 1].lazy);
            tr[u << 1 | 1].lazy = max(tr[u].lazy, tr[u << 1 | 1].lazy);
            tr[u].lazy = 0;
        }
    }
    void build(int u, int l, int r) {
        tr[u] = {l, r, 0, a[l], a[l], a[l], a[l]};
        if (l == r) return;
        int mid = l + r >> 1;
        pushdown(u);
        build(u << 1, l, mid);
        build(u << 1 | 1, mid + 1, r);
        pushup(u);
    }
    void modify(int u, int l, int r, T k) {
        if (tr[u].l >= l && tr[u].r <= r) {
            // tr[u].lazy = max(tr[u].lazy, k);
            tr[u].mx = k;
            return;
        }
        pushdown(u);
        int mid = tr[u].l + tr[u].r >> 1;
        if (l <= mid) modify(u << 1, l, r, k);
        if (r > mid) modify(u << 1 | 1, l, r, k);
        pushup(u);
    }
    Node query(int u, int l, int r) {
        if (tr[u].l >= l && tr[u].r <= r) return tr[u];
        pushdown(u);
        int mid = tr[u].l + tr[u].r >> 1;
        if (r <= mid) return query(u << 1, l, r);
        if (l > mid) return query(u << 1 | 1, l, r);
        return merge(tr[u], query(u << 1, l, r), query(u << 1 | 1, l, r));
    }
};

void solve() {
    int n, m; cin >> n >> m;
    Seg<int> sg(n + 1);
    // sg.init(n + 1);
    for (int i = 1, x; i <= n; i ++) {
        cin >> x;
        sg.add(i, x);
    }
    sg.build(1, 1, n);
    while (m --) {
        int op; cin >> op;
        if (op == 1) {
            int l, r; cin >> l >> r;
            cout << sg.query(1, l, r).mx << '\n';
        } else {
            int x, k; cin >> x >> k;
            sg.modify(1, x, x, k);
        }
    }
    // for (int i = 1; i <= n; i ++) cout << sg.query(1, i, i).mx << " \n"[i == n];
}

int32_t main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}