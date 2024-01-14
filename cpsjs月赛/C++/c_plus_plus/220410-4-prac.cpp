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
    struct student{
        string      name;
        int         chinese;
        int         math;
    };
    int num, max = 0;
    scanf("%d", &num);
    student arr[num];
    for (int i = 0; i < num; i++){
        cin >> arr[i].name >> arr[i].chinese >> arr[i].math;
    }
    for (int i = 0; i < num; i++){
        int mark = arr[i].math + arr[i].chinese;
        if (mark > max) max = mark;
    }
    for (int i = 0; i< num; i++){
        if (arr[i].chinese + arr[i].math == max)
            printf("%s %d %d %d", arr[i].name.c_str(), arr[i].chinese, arr[i].math, max);
    }
    return 0;
}