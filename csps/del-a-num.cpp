#include <bits/stdc++.h>
using namespace std;

char str[1001]; stack<char> s;
int k;

int main() { 
    cin >> str >> k;
    int i = 0;
    while (i < strlen(str)) {
        if (!k) {
          s.push(str[i++]);
          continue;
        }
        if (s.empty()) s.push(str[i++]);
        else {
            if (s.top() > str[i]) {
              s.pop();
              k--;
            } else
              s.push(str[i++]);
        }
    }
    while (k > 0) {
        s.pop();
        k--;
    }
    int cnt = 0;
    while (!s.empty()) {
        str[++cnt] = s.top();
        s.pop();
    }
    while (str[cnt] == '0' && cnt > 1) cnt--;
    for (int i = cnt; i >= 1; i--) cout << str[i];
    return 0;
}
