/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;


struct student {
    string  name;
    int     age;
};

int main(){
    /*
    年龄排序
    【题目描述】
    有N个同学，每个同学有姓名(name)、年龄(age)两个属性。
    请按照年龄从小到大的顺序，分别使用选择排序、插入排序算法进行排序，并比对两个升序序列有多少个元素相同。

    输入：
    第一行有一个正整数N(1<=N<=10000)。
    接下来有N行，每一行包含两个属性，分别是学生的姓名(name)以及年龄(age)，其中1<=strlen(name)<=32，5<=age<=30

    输出:
    单独一行，表示选择排序和插入排序的序列有多少元素相同。

    【样例输入】:
    3
    8 xiaotong
    8 xiaocheng
    6 xiaomei

    【样例输出】:
    1

    【样例解释】:
    若使用选择排序，则会得到序列: {6 xiaomei},{8 xiaocheng},{8 xiaotong}
    若使用插入排序，则会得到序列: {6 xiaomei},{8 xiaotong},{8 xiaocheng}
    我们可以发现，选择排序的序列与插入排序的序列只有第1个位置元素相同，第2、第3个位置的元素均不相同，所以返回1
    */
    int n;
    cin >> n;
    vector<student> students(n);
    for (int i = 0; i < n; i++) {
        cin >> students[i].age >> students[i].name;
    }
    vector<student> students1 = students;
    vector<student> students2 = students;
    // 选择排序
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (students1[j].age < students1[min].age) {
                min = j;
            }
        }
        if (min != i) {
            swap(students1[i], students1[min]);
        }
    }
    // 插入排序
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        student temp = students2[i];
        while (j >= 0 && students2[j].age > temp.age) {
            students2[j + 1] = students2[j];
            j--;
        }
        students2[j + 1] = temp;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (students1[i].age == students2[i].age && students1[i].name == students2[i].name) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
