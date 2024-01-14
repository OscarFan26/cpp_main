/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <iostream>
using namespace std;

int n;
int map[31][31], vist[31];
int max1 = 0;

void dfs(int step, int t){
    if (step == n + 1) {
        if (t > max1) max1 = t;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (vist[i] == 0) {
            vist[i] = 1;
            t += map[step][i];
            dfs(step + 1, t);
            vist[i] = 0;
            t -= map[step][i];
        }
    }
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> map[i][j];
        }
    }
    dfs(1, 0);
    cout << max1 << endl;
    return 0;
}
