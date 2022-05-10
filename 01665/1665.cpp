#include<stdio.h>
#include<algorithm>
using namespace std;
int n, m, cnt;
const int MAX_N = 1e3;
pair<int, int> p1[MAX_N], p2[MAX_N], a[MAX_N*MAX_N * 4];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d %d", &p1[i].first, &p1[i].second);
    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d %d", &p2[i].first, &p2[i].second);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[cnt++] = { p1[i].first + p2[j].first, 1 };
            a[cnt++] = { p1[i].first + p2[j].second + 1, -1 };
            a[cnt++] = { p1[i].second + p2[j].first + 1, -1 };
            a[cnt++] = { p1[i].second + p2[j].second + 2, 1 };
        }
    }
    sort(a, a + cnt);
    long long sum, t = 0, r = 0, idx;
    sum = a[0].second;
    for (int i = 1; i < cnt; i++) {
        if (a[i - 1].first == a[i].first) {
            sum += a[i].second;
            continue;
        }
        t += sum;
        if (t > r) r = t, idx = a[i - 1].first - 1;
        t += sum*(a[i].first - a[i - 1].first - 1);
        if (t > r) r = t, idx = a[i].first - 2;
        sum += a[i].second;
    }
    if (t + sum > r) idx = a[cnt - 1].first - 1;
    printf("%d", idx);
}