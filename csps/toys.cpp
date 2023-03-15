#include <bits/stdc++.h>
using namespace std;

struct node {
    int direction;
    string name;
}a[10001];

int main(){
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i].direction >> a[i].name;
    int present = 0;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        if (a[present].direction == 0 && x == 1
         || a[present].direction == 1 && x == 0) present = (present+y)%n;
        else if (a[present].direction == 0 && x == 0
              || a[present].direction == 1 && x == 1) present = (present-y+n)%n;
    }
    cout << a[present].name << endl;
    return 0;
}

int test() {
}
