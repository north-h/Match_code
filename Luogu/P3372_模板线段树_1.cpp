/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-11-09 00:57:54
 *
 * Problem: P3372 【模板】线段树 1
 * Contest: Luogu
 * URL:     https://www.luogu.com.cn/problem/P3372
 * MemoryL: 125 MB
 * TimeL:   1000 ms
 * ==================================================================================
 */

#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 100010;

int lowbit(int x) {
    return x & (-x);
}

int sum1[N], sum2[N];

void add(int x, int k) {
    for(int i = x; i < N; i += lowbit(i))
        sum1[i] += k, sum2[i] += x * k;
}

void range_add(int l, int r, int x) {
    add(l, x), add(r + 1, -x);
}

int query(int x) {
    int res = 0;
    for(int i = x; i; i -= i & -i)
        res += (x + 1) * sum1[i] - sum2[i];
    return res;
}

int range_query(int l, int r) {
    return query(r) - query(l - 1);
}


int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), b(n + 1), c(n + 1);
    for(int i = 1; i <= n; i++)cin >> a[i];
    for(int i = 1; i <= n; i++) {
        b[i] = a[i] - a[i - 1];
        add(i, b[i]);
    }
    while(m--) {
        int op, l, r, k, x;
        cin >> op;
        if(op == 1) {
            cin >> l >> r >> k;
            range_add(l, r, k);
        } else {
            cin >> l >> r;
            cout << range_query(l, r) << endl;
        }
    }
    return 0;
}