// <-> Made By OscarFan <->
// <-  Description:
/*
 *
*/
// ->
// Hope there are no bugs in this file.
# include <iostream>
# include <cstring>
# include <string>
# include <algorithm>
# include <cstdio>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int a[10] = {9, 3, 7, 2, 6, 1, 0, 5, 4, 8};
    sort(a, a+10, compare);
    for (int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }

    return 0;
}