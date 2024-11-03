// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cerr << #a << '=' << a << endl
#define debug2(a, b) cerr << #a << '=' << a << ' ' << #b << '=' << b << endl
#define int long long
const int N = 100010, INF = 0x3f3f3f3f, eps = 1e-8;

using namespace std;

int sgn(double x) { // 进行判断, 提高精度
    if (fabs(x) < eps) return 0;    // x == 0, 精度范围内的近似相等
    return x > 0 ? 1 : -1;          // 返回正负
}

struct Point {
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}  // 构造函数, 初始值为 0
    // 重载运算符
    // 点 - 点 = 向量(向量AB = B - A)
    Point operator- (const Point &B) const {
        return Point(x - B.x, y - B.y);
    }
    // 点 + 点 = 点, 点 + 向量 = 向量, 向量 + 向量 = 向量
    Point operator+ (const Point &B) const {
        return Point(x + B.x, y + B.y);
    }
    // 向量 × 向量 (叉积)
    double operator^ (const Point &B) const {
        return x * B.y - y * B.x;
    }
    // 向量 · 向量 (点积)
    double operator* (const Point &B) const {
        return x * B.x + y * B.y;
    }
    // 点 * 数 = 点, 向量 * 数 = 向量
    Point operator* (const double &B) const {
        return Point(x * B, y * B);
    }
    // 点 / 数 = 点, 向量 / 数 = 向量
    Point operator/ (const double &B) const {
        return Point(x / B, y / B);
    }
    // 判断大小, 一般用于排序
    bool operator< (const Point &B) const {
        return x < B.x || (x == B.x && y < B.y);
    }
    // 判断相等, 点 == 点, 向量 == 向量, 一般用于判断和去重
    bool operator== (const Point &B) const {
        return sgn(x - B.x) == 0 && sgn(y - B.y) == 0;
    }
    // 判断不相等, 点 != 点, 向量 != 向量
    bool operator!= (const Point &B) const {
        return sgn(x - B.x) || sgn(y - B.y);
    }
};

// Need: sgn()

typedef Point Vector;

// 向量 · 向量 (点积)
double operator* (Vector &A, Vector &B) {
    return A.x * B.x + A.y * B.y;
}

// 向量 × 向量 (叉积)
double operator^ (Vector &A, Vector &B) {
    return A.x * B.y - A.y * B.x;
}

int Cross(Point a, Point b, Point c) { 
    return sgn((b - a) ^ (c - a)); 
}

// 点集 p[] 的下标从 1 开始, 长度为 n
void Andrew(vector<int> &p, int n) {
    vector<int> s;
    sort(p.begin() + 1, p.end());
    for (int i = 1; i <= n; i++) {  // 下凸包
        while (top > 1 && Cross(s[top - 1], s[top], p[i]) <= 0) top--;
        s[++top] = p[i];
    }
    int t = top;
    for (int i = n - 1; i >= 1; i--) {  // 上凸包
        while (top > t && Cross(s[top - 1], s[top], p[i]) <= 0) top--;
        s[++top] = p[i];
    }

    top--;  // 因为首尾都会加一次第一个点, 所以去掉最后一个
}

void solve() {
    int n; cin >> n;
    vector<int> 
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}

// 2
// 6
// -2 0
// 1 -2
// 5 2
// 0 4
// 1 2
// 3 1
// 4
// 0 0
// 1 0
// 0 1
// 1 1