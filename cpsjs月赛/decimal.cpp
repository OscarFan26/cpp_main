/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

/*
我们的都知道可以将分数 
 
 转化成小数，其中有些是有限位的，比如 
，而有些是无限位的，比如 
。

给定 
 和 
，你需要判断 
 
 是否是有限小数，如果是的话，求出最后一位小数。如果 
 
 是整数，那么需要输出最后一位非零的数。

输入
第一行一个正整数 
。

第二行一个正整数 
。

 都可以用 64-位有符号整数表示。

输出
一个整数，表示 
 
 转化成有限小数后的最后一位小数。

如果转化后是整数，输出最后一位非零的数。

如果转化后是无限小数，输出 
。
*/

string fractionToDecimal(int numerator, int denominator) {
        if((int64_t)numerator % denominator == 0) return to_string((int64_t)numerator / denominator);

        int64_t up = abs((int64_t)numerator), down = abs((int64_t)denominator);
        string ans(((numerator < 0) ^ (denominator < 0) ? "-" : "") + to_string(up / down) + '.');
        unordered_map<int64_t, int> index;

        for(int i = ans.size(); up = up % down * 10; ++i){
            if(index.count(up)) {
                ans.insert(begin(ans) + index[up], '(');
                ans.push_back(')');
                break;
            }
            index[up] = i;
            ans.push_back('0' + up / down);
        }
        return ans;
}
int main() {
freopen("decimal.in", "r", stdin);
freopen("decimal.out", "w", stdout);
  int n, m;cin >> n >> m;
  string ans = fractionToDecimal(n, m);
  if (ans[ans.length()-1]==')') cout << -1;
  else
        cout << ans[ans.length() - 1];
  fclose(stdout);
  fclose(stdin);
  return 0;
}
