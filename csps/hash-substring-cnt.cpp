#include <bits/stdc++.h>
using namespace std;

const long long B = 29;
char            sub[100001], str[100001];
long long       subh, h[100001];

int main() { 
    cin >> sub >> str;
    int lensub = strlen(sub);
    for (int i = 0; i < lensub; i++) subh = subh * B + sub[i];
    int str_len = strlen(str);
    for (int i = 0; i < str_len; i++) h[i + 1] = h[i] * B + str[i];
    int ans = 0;
    long long k   = pow(B, lensub);
    for (int i = lensub; i <= str_len;i++)
        if (subh == h[i] - h[i - lensub] * k) ans++;
    cout << ans;
    return 0;
}
