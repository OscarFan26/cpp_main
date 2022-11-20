//
// Created by Oscar Fan on 2022/2/23.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int    students;
    cin >> students;
    int    age;
    double counter = 0.0;
    for (int i = students; i > 0; i--) {
        cin >> age;
        counter += age;
    }
    counter = counter / students;
    cout << fixed << setprecision(2) << counter << endl;
    return 0;
}
