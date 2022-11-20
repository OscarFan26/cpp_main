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
#include <algorithm>
using namespace std;




struct student{
    string      name;
    int         chinese;
    int         maths;
};

bool compare(student a, student b){
    return a.maths + a.chinese > b.maths + b.chinese;
//    return a > b;
}

int main() {
    int num;
    scanf("%d", &num);
    int marks[num] = {};
    student stdt[num];
    for (int i = 0; i < num; i++) {
        cin >> stdt[i].name >> stdt[i].chinese >> stdt[i].maths;
        marks[i] = stdt[i].chinese + stdt[i].maths;
    }
    sort(stdt, stdt+num, compare);
    for (int i = 0; i < num; i++){
        printf("%s %d %d %d\n", stdt[i].name.c_str(), stdt[i].chinese, stdt[i].maths, stdt[i].maths + stdt[i].chinese);
    }
    return 0;
}