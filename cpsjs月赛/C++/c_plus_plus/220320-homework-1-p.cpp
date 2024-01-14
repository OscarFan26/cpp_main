//
// Created by Oscar Fan on 2022/3/20.
//
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char target[1001];
    cin.getline(target, 1001);
    int capital_letters = 0, letters = 0, numbers = 0, others = 0;
    for (int i = 0; i < strlen(target); i++) {
        if (target[i] >= 'a' && target[i] <= 'z') { letters++; }
        else if (target[i] >= 'A' && target[i] <= 'Z') { capital_letters++; }
        else if (target[i] >= '0' && target[i] <= '9') { numbers++; }
        else { others++; }
    }
    cout << capital_letters << " " << letters << " " << numbers << " "  << others;
    return 0;
}
