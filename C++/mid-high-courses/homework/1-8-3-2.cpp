/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

/*
    老师谢谢你
    leetcode 452
    
    我 稍微 改 一下 没事吧？
*/

int findMinArrowShots(vector<vector<int>>& points) {
    int size = points.size();
    if (size == 0) return 0;
    sort(points.begin(), points.end(), [](const vector<int>& u, const vector<int>& v) { return u[1] < v[1]; });
    int total = 1, flag = points[0][1];
    for (int i = 0; i < size; i++) {
        if (points[i][0] > flag) {
            total++;              
            flag = points[i][1];  
        }
    }
    return total;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> points;
    for (int i = 0;i < N; i++) {
        int s, e;
        cin >> s >> e;
        vector<int> a_pair;
        a_pair.emplace_back(s);
        a_pair.emplace_back(e);
        points.emplace_back(a_pair);
    }
    cout << findMinArrowShots(points);
    return 0;
}
