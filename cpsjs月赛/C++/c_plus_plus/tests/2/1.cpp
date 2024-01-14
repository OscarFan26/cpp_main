/*
 * @OscarFan 制作 : 
 * @Date: 2022-05-15 09:40:02
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct students {
    string name;
    int end_term_points;
    int normal_points;
    string is_bgb;
    int money = 0;
};

bool compare(students a, students b){
    // if (a.id == b.id || a.id > b.id) {
    return a.money > b.money;
}

int main(){
    int numbers;
    cin >> numbers;
    students student[numbers];
    for (int i = 0; i < numbers; i++){
        cin >> student[i].name >> student[i].end_term_points >> student[i].normal_points >> student[i].is_bgb;
    }
    // int money[numbers] = {0};
    for (int i = 0; i < numbers; i++){
        if (student[i].end_term_points > 85 && student[i].normal_points > 80){
            student[i].money += 8000;
        }
        if (student[i].end_term_points > 90){
            student[i].money += 4000;
        }
        if (student[i].normal_points > 80 && student[i].is_bgb == "Y"){
            student[i].money += 2000;
        }
    }
    sort(student, student + numbers, compare);
    // print
    cout << student[0].name << endl;
    cout << student[0].money << endl;
    int sum = 0;
    for (int i = 0; i < numbers; i++){
        sum += student[i].money;
    }
    cout << sum << endl;

    return 0;
}