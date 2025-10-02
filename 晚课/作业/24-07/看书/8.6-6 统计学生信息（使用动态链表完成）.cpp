/*
    By Oscar Fan
    Date: 2024/7/1
    File: 8.6-6 统计学生信息（使用动态链表完成）.cpp
*/
#include <bits/stdc++.h>

struct student {
  std::string id;
  std::string name;
  char gender;
  int age;
  int marks;
  std::string address;
  student *next;
};

student *head, *present, *rear;

int get_length() {
  int cnt = 0;
  present = head;
  while (present != nullptr) {
    cnt++;
    present = present->next;
  }
  return cnt;
}

student *get_data(int pos) {
  int cnt = 0;
  present = head;
  while (present != nullptr) {
    cnt++;
    if (cnt == pos) return present;
    present = present->next;
  }
  return nullptr;
}

int main() {
  head = new student;
  rear = head;
  while (true) {
    present = new student;
    std::string id;
    std::cin >> id;
    if (id == "end") break;
    present->id = id;
    std::cin >> present->name >> present->gender >> present->age >> present->marks >> present->address;
    present->next = nullptr;
    rear->next    = present;
    rear          = present;
  }
  for (int i = get_length(); i > 1; i--) {
    student *pp = get_data(i);
    std::cout << pp->id << " " << pp->name << " " << pp->gender << " " << pp->age << " " << pp->marks << " "
              << pp->address << "\n";
  }
  return 0;
}
