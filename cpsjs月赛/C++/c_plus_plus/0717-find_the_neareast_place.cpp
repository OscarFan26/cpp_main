// Made By OscarFan
// Date:  7/17/2022 10:22 AM
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
// FILE NAME: find_the_neareast_place.cpp
//NEAREAST
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

struct place {
    string      name;
    // python后遗症：float xx -> double xx(但是其实都可以)
    float       distance;
};

bool cmp(place a, place b) { return a.distance < b.distance; }

int main() {
//    找到最近的地方（struct）三个不同的类型（先输入数量，在输入数据，有名字和距离）
    int q1, q2, q3;
    // ---
    cin >> q1;
    place p1[q1];
    for (int i = 0; i < q1; i++)
        cin >> p1[i].name >> p1[i].distance;
    cin >> q2;
    place p2[q2];
    for (int i = 0; i < q2; i++)
        cin >> p2[i].name >> p2[i].distance;
    cin >> q3;
    place p3[q3];
    for (int i = 0; i < q3; i++)
        cin >> p3[i].name >> p3[i].distance;
    // ---
    sort(p1, p1 + q1, cmp);
    sort(p2, p2 + q2, cmp);
    sort(p3, p3 + q3, cmp);
    // ---
    cout << p1[0].name << " " <<p1[0].distance << endl << endl << p2[0].name << " " << p2[0].distance << endl << endl << p3[0].name << " " << p3[0].distance << endl;
    return 0;
}