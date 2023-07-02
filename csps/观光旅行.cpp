
#include <algorithm>
#include <cstdio>
#include <cstring>
#define _Clr(x, y) memset(x, y, sizeof(x))
#define INF 0xfffffff
#define N 110
using namespace std;

int mat[N][N], dist[N][N];
int next[N][N];  // next[i][j]表示ｉ到ｊ经历的第一个点。
int path[N];
int cnt, n;

void Floyd() {
    int mins = INF;
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i < k; i++)
            for (int j = i + 1; j < k; j++) {
                int tmp = dist[i][j] + mat[i][k] + mat[k][j];
                if (tmp < mins)  // 更新最小环的权值
                {
                    mins  = tmp;
                    cnt   = 0;
                    int p = i;
                    while (p != j)  // 记录最小环的路径
                    {
                        path[cnt++] = p;
                        p           = next[p][j];
                    }
                    path[cnt++] = j;
                    path[cnt++] = k;
                }
            }
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    next[i][j] = next[i][k];
                }
            }
    }
    if (mins == INF)
        puts("No solution.");
    else {
        for (int i = 0; i < cnt; i++) printf("%d%s", path[i], i == cnt - 1 ? "\n" : " ");
    }
    // printf("%d\n",mins);
}

void Init() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            mat[i][j] = dist[i][j] = INF;
            next[i][j]             = j;
        }
}
int main() {
    int m, a, b, c;
    while (~scanf("%d%d", &n, &m)) {
        Init();
        while (m--) {
            scanf("%d%d%d", &a, &b, &c);
            if (c < mat[a][b]) {
                mat[a][b] = mat[b][a] = c;
                dist[a][b] = dist[b][a] = c;
            }
        }
        Floyd();
    }
    return 0;
}
