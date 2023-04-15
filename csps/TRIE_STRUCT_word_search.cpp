/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

struct trie {
    int son[27];
    int val;
} tree[100005];

char s[101];
int  tot = 0;

void insert(char s[]) {
    int p = 1, len = strlen(s);
    for (int i = 0; i < len; i++) {
        int c = s[i] - 'a';
        if (tree[p].son[c] == 0) tree[p].son[c] = ++tot;
        p = tree[p].son[c];
    }
    tree[p].val++;
}

int find(char s[]) {
    int p = 1, len = strlen(s);
    for (int i = 0; i < len; i++) {
        int c = s[i] - 'a';
        if (tree[p].son[c] == 0) return 0;
        p = tree[p].son[c];
    }
    return tree[p].val;
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
        if (t == 0)
            cout << "NO";
        else
            cout << "exists " << t << endl;
    }
    return 0;
}
