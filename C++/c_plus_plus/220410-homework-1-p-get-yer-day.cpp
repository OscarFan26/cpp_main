// <-> Made By OscarFan <->
// <-  Description:
/*
 *
*/
// ->
// Hope there are no bugs in this file.
# include <iostream>
# include <string>
# include <cstdio>

using namespace std;

int main() {
    int month, day, sum = 0;
    scanf("%d %d", &month, &day);
    switch (month) {
        case 1:
            sum = 0;
            break;
        case 2:
            sum = 31;
            break;
        case 3:
            sum = 59;
            break;
        case 4:
            sum = 90;
            break;
        case 5:
            sum = 120;
            break;
        case 6:
            sum = 151;
            break;
        case 7:
            sum = 181;
            break;
        case 8:
            sum = 212;
            break;
        case 9:
            sum = 243;
            break;
        case 10:
            sum = 273;
            break;
        case 11:
            sum = 303;
            break;
        case 12:
            sum = 334;
            break;
        default:
            break;
    }
    if (month > 2) sum ++;
    printf("%d", sum);
    return 0;
}