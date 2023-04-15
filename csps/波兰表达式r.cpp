/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

double b() {
char c[1001];cin >>c;
switch(c[0]) {
    case '+': return b() + b();
    case '-': return b() - b();
    case '*': return b() * b();
    case '/': return b() / b();
    default: return atof(c);
}
}

int main() {
    cout << b();
    return 0;
}
