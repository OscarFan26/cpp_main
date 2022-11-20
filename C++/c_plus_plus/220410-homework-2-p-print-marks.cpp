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
# include <cstdio>

using namespace std;

int main() {
    struct student{
        string      name;
        int         chinese;
        int         maths;
    };
    int num;
    scanf("%d", &num);
    student stdt[num];
    for (int i = 0; i < num; i++){
        cin >> stdt[i].name >> stdt[i].chinese >> stdt[i].maths;
    }
    for (int i = 0; i < num; i++){
        printf("%d\n", stdt[i].maths + stdt[i].chinese);
    }
    return 0;
}