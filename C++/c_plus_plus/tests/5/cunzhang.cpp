// Made By OscarFan
// Date:  7/24/2022 9:39 AM
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
// FILE NAME: cunzhang.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <iomanip>
# include <vector>
# include <cctype>
# include <ctime>
# include <cmath>
# include <algorithm>

using namespace std;

struct elector {
    int    votes;
    int    id;
};

bool compare(elector a, elector b) {
    return a.votes > b.votes;
}

int main() {
    freopen("cunzhang.in", "r", stdin);
    freopen("cunzhang.out", "w", stdout);
    // 4. ѡ�峤��cunzhang.cpp��
    //������������
    //�����ԭ�����峤���죬������λ��ѡ��ϲ��������������������ǵı�ŷֱ�
    //Ϊ 1��2��3������ n λͶƱ�����ͶƱ���뽫ͶƱ�����λ��ѡ�򣬰���Ʊ���������У���Ʊ
    //����ͬ������С�Ŀ�ǰ��
    //��ʾ�� ʹ�ýṹ�弰 sort ����
    //���
    //���У�ÿ��չʾһλ����Ʊ����������ĵ���Ϣ��������ѡ���ţ������Լ�Ʊ����
    //�������ļ���
    //�ļ�����cunzhang.in
    //�������У���һ��Ϊһ������ 0 ������ n����ʾ�� n λ�����ͶƱ�� �ڶ��а��� n ����
    //Χ�� 1 �� 3 ֮�����������ʾ�� n λ���ͶƱ��š�������û��ͶƱ����Ȩ��
    elector electors[3];
    for (int i = 0; i < 3; i++) { electors[i].votes = 0;
        electors[i].id = i + 1;
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int who;
        cin >> who;
        electors[who - 1].votes++;
    }
    sort(electors, electors + 3, compare);
    vector<string> names = {"ϲ����", "������", "������"};
    for (int i = 0; i < 3; i++) {
        cout << electors[i].id << ' ' << names[electors[i].id - 1] << ' ' << electors[i].votes << endl; // ����������-1����ɵĶ��ѣ� �����˷���20���ӵ�ʱ�䡣
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}