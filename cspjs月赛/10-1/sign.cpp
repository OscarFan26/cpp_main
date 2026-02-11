#include <iostream>
using namespace std;

int main() {
    freopen("sign.in", "r", stdin);
    freopen("sign.out", "w", stdout);
    int n;
    cin >> n;
    const int mod = 998244353;
    if (n == 1) cout << 1;
    else {
        long long x = 1, y = 0;
        for (int i = 2; i <= n; i++) {
            x = (x * 9 + static_cast<long long>(pow(10, i - 1))) % mod;
            y = ((y + 1) * 10 - 1) % mod;
        }
        cout << x - y;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}

/*       contains 1       // contains 0
0~1             0               0
0~10         0+1                0+0
0~100       1*9+10              9
0~1000     x= 19*9+100        y= 10*10-1
           9x+1000              (y+1)*10-1
 */
