/*
    By Oscar Fan
    Date: 2025/6/4
    File: mason.cpp
*/
#include <bits/stdc++.h>
using namespace std;

struct Wint : vector<int> {
  Wint(int n = 0) {
    push_back(n);
    check();
  }
  Wint &check() {
    while (!empty() && !back()) pop_back();
    if (empty()) return *this;
    for (int i = 1; i < size(); ++i) {
      (*this)[i] += (*this)[i - 1] / 10;
      (*this)[i - 1] %= 10;
    }
    while (back() >= 10) {
      push_back(back() / 10);
      (*this)[size() - 2] %= 10;
    }
    return *this;
  }
};

istream &operator>>(istream &is, Wint &n) {
  string s;
  is >> s;
  n.clear();
  for (int i = s.size() - 1; i >= 0; --i) n.push_back(s[i] - '0');
  return is;
}

ostream &operator<<(ostream &os, const Wint &n) {
  if (n.empty()) os << 0;
  else
    for (int i = n.size() - 1; i >= 0; --i) os << n[i];
  return os;
}

bool operator!=(const Wint &a, const Wint &b) {
  if (a.size() != b.size()) return 1;
  for (int i = a.size() - 1; i >= 0; --i)
    if (a[i] != b[i]) return 1;
  return 0;
}

bool operator==(const Wint &a, const Wint &b) { return !(a != b); }

bool operator<(const Wint &a, const Wint &b) {
  if (a.size() != b.size()) return a.size() < b.size();
  for (int i = a.size() - 1; i >= 0; --i)
    if (a[i] != b[i]) return a[i] < b[i];
  return 0;
}

bool operator>(const Wint &a, const Wint &b) { return b < a; }

bool operator<=(const Wint &a, const Wint &b) { return !(a > b); }

bool operator>=(const Wint &a, const Wint &b) { return !(a < b); }

Wint &operator+=(Wint &a, const Wint &b) {
  if (a.size() < b.size()) a.resize(b.size());
  for (int i = 0; i != b.size(); ++i) a[i] += b[i];
  return a.check();
}

Wint operator+(Wint a, const Wint &b) { return a += b; }

Wint &operator-=(Wint &a, Wint b) {
  for (int i = 0; i != b.size(); a[i] -= b[i], ++i)
    if (a[i] < b[i]) {
      int j = i + 1;
      while (!a[j]) ++j;
      while (j > i) {
        --a[j];
        a[--j] += 10;
      }
    }
  return a.check();
}

Wint operator-(Wint a, const Wint &b) { return a -= b; }

Wint operator*(const Wint &a, const Wint &b) {
  Wint n;
  n.assign(a.size() + b.size() - 1, 0);
  for (int i = 0; i != a.size(); ++i)
    for (int j = 0; j != b.size(); ++j) n[i + j] += a[i] * b[j];
  return n.check();
}

Wint &operator*=(Wint &a, const Wint &b) { return a = a * b; }

Wint divmod(Wint &a, const Wint &b) {
  Wint ans;
  for (int t = a.size() - b.size(); a >= b; --t) {
    Wint d;
    d.assign(t + 1, 0);
    d.back() = 1;
    Wint c   = b * d;
    while (a >= c) {
      a -= c;
      ans += d;
    }
  }
  return ans;
}

Wint operator/(Wint a, const Wint &b) { return divmod(a, b); }

Wint &operator/=(Wint &a, const Wint &b) { return a = a / b; }

Wint &operator%=(Wint &a, const Wint &b) {
  divmod(a, b);
  return a;
}

Wint operator%(Wint a, const Wint &b) { return a %= b; }

int main() {
  int p;
  cin >> p;
  Wint ans = 1, m = 2, k = 1;
  cout << int(log10(2) * p + 1) << endl;
  for (int i = 1; i <= 500; ++i) k *= 10;
  for (; p; p >>= 1, m = m * m % k)
    if (p & 1) ans = ans * m % k;
  ans -= 1;
  int sis = 500 - ans.size();
  int t   = 0;
  if (sis < 0)
    ;
  else {
    for (int i = 1; i <= sis; ++i) {
      cout << 0;
      if (i % 50 == 0) cout << endl;
    }
    t = sis;
  }
  std::reverse(ans.begin(), ans.end());
  ans.resize(500 - sis);
  for (auto i: ans) {
    t++;
    cout << i;
    if (t % 50 == 0) cout << "\n";
  }
  return 0;
}