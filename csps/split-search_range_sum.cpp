#include <bits/stdc++.h>
using namespace std;

int main() {
    //  有n个正整数存入a数组中(n<=10000)，现在有一个数s，要求a[i]+a[i+1]+...a[j]>=s。是否存在i~j之间的长度最小。如果存在输出最小长度，不存在输出-1。例如：（n=7,s=6,第二行是7个正整数）
    // 提示：用自带函数 binary_search() lower_bound() upper_bound()
    int n, s, a[10000];
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = 0, sum = a[0], ans = n + 1;
    while (r < n) {
        if (sum < s) {
            sum += a[++r];
        } else {
            ans = min(ans, r - l + 1);
            sum -= a[l++];
        }
    }
    cout << (ans == n + 1 ? -1 : ans);
    return 0;
    
}



