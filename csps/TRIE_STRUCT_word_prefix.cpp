#include <bits/stdc++.h>
using namespace std;

int  ch[100005][30];
int  val[100005];
char s[101];
int  tot;

void insert(char s[]) {
    int p = 1, len = strlen(s);
    for (int i = 0; i < len; i++) {
        int c = s[i] - 'a';
        if (ch[p][c] == 0) ch[p][c] = ++tot;
        p = ch[p][c];
        val[p]++;
    }
}

int find(char s[]) {
    int p = 1, len = strlen(s);
    for (int i = 0; i < len; i++) {
        int c = s[i] - 'a';
        p     = ch[p][c];
    }
    return val[p];
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        insert(s);
    }
    int m;
    cin >> m;
    while (m--) {
        cin >> s;
        int t = find(s);
        if (t == 0) cout << "NO" << endl;
        
        else
            cout << "e:"<<t << endl;
    }
    return 0;
}
