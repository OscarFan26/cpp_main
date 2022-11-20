// Made By OscarFan
// Date:   2022/5/29 上午 09:32
// NO ERRORS IN ANY FILES~
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    int target, sum = 0;
    cin >> target;
    if (target == 1) { cout << 2; return 0; }
    for (int i = target; i > 1; i--){
        sum += i;
    }
    cout << sum;
    return 0;
}