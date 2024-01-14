// <-> Made By OscarFan <->
// <-  Description:
/*
 *
*/
// ->
// Hope there are no bugs in this file.
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    struct student{
        int     number;
        string  name;
        int     chinese;
        int     maths;
        int     english;
    };
    student a_student[2];
    for (int i = 0; i < 2; i++) {
        scanf("%d", &a_student[i].number);
        scanf("%s", &a_student[i].name[0]);
        scanf("%d", &a_student[i].chinese);
        scanf("%d", &a_student[i].maths);
        scanf("%d", &a_student[i].english);
        printf("--- sepr ---\n");
    }
    for (int i = 0; i < 2; i++){
        printf("Number: %d\n\t", a_student[i].number);
        printf("Name: %s\n\t", a_student[i].name.c_str());
        printf("Chinese Marks: %d\n\t", a_student[i].chinese);
        printf("Maths Marks: %d\n\t", a_student[i].maths);
        printf("English Marks: %d\n\t", a_student[i].english);
        printf(
                "Marks All: %d\n",
                a_student[i].chinese + a_student[i].maths + a_student[i].english);

    }
    return 0;
}