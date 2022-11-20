// Made By OscarFan
// Date:  7/10/2022 9:43 AM
//       _..._
//    .-'_..._''.
//  .' .'      '.\
//   .'
//   .                .-.          .-.
//| |                 | |          | |
//| |             ,---| |---.  ,---| |---.
//. |             `---| |---'  `---| |---'
// \ '.          .    | |          | |
//  '. `._____.-'/    `-'          `-'
//   `-.______ /
//           `
// TYPE:   C++
// FILE NAME: 3.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

struct student{
    int id;
    int score;
};

bool cmp(student a, student b) {
    // 如分数一样，则按照 id 升序排列
    if (a.score == b.score) return a.id < b.id;
    return a.score > b.score;
}

using namespace std;
int main() {
    // 分数排名: 输出最高分的学生的学号和分数
    int students_num, subjects;
    cin >> students_num >> subjects;
    student students[students_num] = {};
    for (int i = 0; i < students_num; i++) {
        students[i].id = i + 1;
        int sum = 0, tmp = 0;
        for (int j = 0; j < subjects; j++) {
            cin >> tmp;
            sum += tmp;
        }
        students[i].score = sum;
    }
    sort(students, students + students_num, cmp);
    cout << students[0].id << " " << students[0].score << endl;

    return 0;
}