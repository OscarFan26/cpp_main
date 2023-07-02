/*
求区间最值  RMQ
st表
n,m<=100000
10 2
1 2 3 4 5 5 4 3 2 1
1 4
8 10
输出：
4
3
*/
#include <bits/stdc++.h>
#define maxn 10005
using namespace std;
//                f[i][j],表示i为起点，长度为2^j,这个区间里的最大值
int  a[maxn], n, m, f[maxn][25];
void create_st() {
    for (int i = 1; i <= n; i++) f[i][0] = a[i];
    for (int j = 1; (1 << j) <= n; j++)              // 2^j<=n==> j=log(n)
        for (int i = 1; i <= n + 1 - (1 << j); i++)  // i [i,x]  x-i+1=  2^j ==>n>=x=i+2^j-1i+2^j-1=x<=n == i<=n+1-2^j
            f[i][j] = max(f[i][j - 1], f[i + (1 << (j - 1))][j - 1]);
    /*j=1;
    for(int i=1;i<=;i++)
        f[i][1]=  max(f[i][0],f[i+(1<<(j-1))][0]);
    f[1][1]=2
    f[2][1]=3
    f[3][1]=4
    f[4][1]=5
    f[5][1]=5
    j=2;
    for(int i=1;i<=;i++)
        f[i][j]=  max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
    f[2][2] =max(f[2][1],f[1+(1<<(j-1))][1])
    */
    // 1<<2==4  左移1位，相当于*2， 左移2位，相当于*2*2，左移0位，相当于乘1
    /*f[1][0]=a[1];   以第1个元素为起点，长度是2^0=1的区间
      f[2][0]=a[2]     以第2个元素为起点，长度是2^0=1的区间
    f[1][1]           以第1个元素为起点，长度是2^1=2的区间 [1,2]
    f[2][1]			  以第2个元素为起点，长度是2^1=2的区间 [2,3]
    f[1][2]           以第1个元素为起点，长度是2^2=4的区间 [1,2,3,4]
    f[i][j]           以第i个元素为起点，长度是2^j的区间*/
}
int query(int l, int r) {                         //[2,7]
    int k = log2(r - l + 1);                      // 2^2...=5  2^2 =4 2^3=8
    return max(f[l][k], f[r + 1 - (1 << k)][k]);  // r+1-(1<<k)=w
}
int main() {
    // 找最值（最大，最小）
    int L, R, ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    create_st();                    // nlogn
    for (int i = 1; i <= m; i++) {  // O(m)
        ans = 0;
        cin >> L >> R;              //[1,n]  [2,2]    [j,j]
        ans = query(L, R);
        cout << ans << endl;
    }

    return 0;
}
