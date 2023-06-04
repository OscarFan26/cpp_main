/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

#define maxn 100005
int a[maxn], n;
int tree[maxn << 1], top;

void pop() {
    if (top <= 1) return;
    swap(tree[1], tree[top]);
    int k = 1;
    while (1) {
        int t = k * 2;
        if (tree[t] < tree[t + 1]) t++;
        if (t > top) break;
        if (tree[k] < tree[t])
            swap(tree[k], tree[t]);
        else
            break;
        k = t;
    }
}

void push(int x) {
    tree[++top] = x;
    int k       = top;
    while (k / 2 > 0 && tree[k] > tree[k / 2]) {
        swap(tree[k], tree[k / 2]);
        k /= 2;
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        push(a[i]);
    }
    for (int i = 1; i <= top; i++) cout << tree[i] << ' ';
    pop();
    cout << endl;
    for (int i = 1; i <= top; i++) cout << tree[i] << ' ';
    return 0;
}
