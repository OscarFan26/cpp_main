// <-> Made By OscarFan <->
// <-  Description:
/*
 *      struct type_name {
 *          type name;
 *          type name;
 *          ...
 *      };
 *
 *
 *      :初始化
 *      struct name NameOfTarget
 *      name NameOfTarget[, ...]
 *      name NameOfTargetArray{....., ...}
*/
// ->
// Hope there are no bugs in this file.
#include <cstdio>  // better add on this code.
#include <string>
using namespace std;

int main(){
    struct student{
        int     number;
        string  name;
        int     chinese;
        int     maths;
        int     english;
    };
    student a_student;
    scanf("%d", &a_student.number);
    scanf("%s", &a_student.name[0]);
    scanf("%d", &a_student.chinese);
    scanf("%d", &a_student.maths);
    scanf("%d", &a_student.english);
    printf("a student's info:\n\t");
    printf("Number: %d\n\t", a_student.number);
    printf("Name: %s\n\t", a_student.name.c_str());
    printf("Chinese Marks: %d\n\t", a_student.chinese);
    printf("Maths Marks: %d\n\t", a_student.maths);
    printf("English Marks: %d\n\t", a_student.english);
    printf(
            "Marks All: %d\n",
           a_student.chinese + a_student.maths + a_student.english);

    return 0;
}
