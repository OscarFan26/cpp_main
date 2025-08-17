/*
    By Oscar Fan
    Date: 2025/4/25
    File: machine.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> taskTimes;
vector<int> machineLoads;
int minMaxTime = INT_MAX;

void dfs(int taskIndex) {
  if (taskIndex == n) {
    int currentMaxTime = *max_element(machineLoads.begin(), machineLoads.end());
    if (currentMaxTime < minMaxTime) minMaxTime = currentMaxTime;
    return;
  }
  for (int i = 0; i < k; ++i) {
    if (machineLoads[i] + taskTimes[taskIndex] >= minMaxTime) continue;
    machineLoads[i] += taskTimes[taskIndex];
    dfs(taskIndex + 1);
    machineLoads[i] -= taskTimes[taskIndex];
    if (machineLoads[i] == 0) break;
  }
}

int main() {
  freopen("machine.in", "r", stdin);
  freopen("machine.out", "w", stdout);
  cin >> n >> k;
  int time;
  for (int i = 0; i < n; ++i) {
    cin >> time;
    taskTimes.push_back(time);
  }
  sort(taskTimes.begin(), taskTimes.end(), greater<int>());
  machineLoads.resize(k, 0);
  dfs(0);
  cout << minMaxTime << endl;
  fclose(stdin);
  fclose(stdout);
  return 0;
}