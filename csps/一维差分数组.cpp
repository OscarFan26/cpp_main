/*
�������
a    1 2 3 5 3 2
     2 3 4 5 3 2
b    1 1 1 2 -2 -1
     2 1 1 1 -2 -1
1-3  ͳһ����1
b[1]+=1
b[4]-=1

x-y   +z

b[x]+=z;
b[y+1]-=z;



ǰ׺������

b[1]=a[1]-a[0];
b[2]=a[2]-a[1];
b[3]=a[3]-a[2];
...
b[n]=a[n]-a[n-1];

    =a[n]-a[0]

����n������ m�β��� ,ÿ�β������ǽ�x-y֮�����ֵ����z
���������֮���n�����ֵ�ֵ

*/

#include <bits/stdc++.h>
using namespace std;
int a[1000001];
int b[1000001], c[1000001];
int main() {
    int n, m, x, y, z;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i] - a[i - 1];
    }
    while (m--) {
        cin >> x >> y >> z;
        b[x] += z;
        b[y + 1] -= z;
    }
    for (int i = 1; i <= n; i++) { c[i] = b[i] + c[i - 1]; }
    for (int i = 1; i <= n; i++) { cout << c[i] << ' '; }
    return 0;
}
