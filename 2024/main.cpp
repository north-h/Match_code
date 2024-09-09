//#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using PII = pair<ll, ll>;
#define int ll

const int N = 2e6 + 10, M = 210;
const int INF = 0x3f3f3f3f;
const int mod = 998244353;
string s, t;
vector<int> cnt(26, 0);
vector<string> pret, suft;
unordered_map<string, int> pre;
unordered_map<string, int> suf;
void solve() {
    cin >> s >> t;
    int lenS = s.size(), lenT = t.size();
    s = " " + s, t = " " + t;
    for (int i = 1; i <= lenT - 1; i++) pret.emplace_back(t.substr(1, i)), suft.emplace_back(t.substr(i + 1));
    int curans = 0;
    for (int idx = 1; idx <= lenS; idx++) {
        cout << "idx:" << idx << '\n';
        for (auto [x, y] : pre) cout << x << ' ' << y << '\n';
        for (auto [x, y] : suf) cout << x << ' ' << y << '\n';
        ////先用
        curans *= 2, curans %= mod;
        for (int i = 1; i <= lenT - 1; i++) curans += pre[t.substr(1, i)] * suf[t.substr(i + 1)], curans %= mod;
        string st = " ";
        st += s[idx];
        st += t.substr(2);
        cout << "st:" << st << '\n';
        if (st == t) curans += suf[t.substr(2)], curans %= mod;
        cout << "st:" << st << '\n';
        st = " ";
        st += t.substr(1, lenT - 1);
        st += s[idx];
        if (st == t) curans += pre[t.substr(1, lenT - 1)], curans %= mod;
        for (int i = 0; i < (int)pret.size(); i++) {
            if (i != lenT) curans += pre[pret[i] + char(s[idx])] * suf[suft[i]];
            if (i != 1) curans += pre[pret[i]] * suf[char(s[idx]) + suft[i]];
        }

        ////再更新
        string str = "";
        int curcnt = 1;
        for (int i = 1; i <= lenT - 1; i++) {
            curcnt *= cnt[t[i] - 'a'], curcnt %= mod;
            str += char(t[i]);
            pre[str] = curcnt;
        }
        for (auto p : pret) pre[p + char(s[idx])] += pre[p];
        str = "", curcnt = 1;
        for (int i = lenT; i >= 2; i--) {
            curcnt *= cnt[t[i] - 'a'], curcnt %= mod;
            str = char(t[i]) + str;
            suf[str] = curcnt;
        }
        for (auto p : suft) suf[char(s[idx]) + p] += suf[p];
        ////再更新
        for (int i = 0; i < 26; i++) cnt[i] *= 2, cnt[i] %= mod;
        cnt[s[idx] - 'a']++, cnt[s[idx] - 'a'] %= mod;
        string ss = "";
        ss += s[idx];
//      cout << "ss:" << ss << '\n';
        if (idx == 1) pre[ss]++, suf[ss]++;
        cout << "curans:" << curans << '\n';
    }
    cout << curans;
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(time(0));
    int O_o = 1;
//  cin >> O_o;
    while (O_o--) solve();
    return 0;
}
//make it count
//开ll plz