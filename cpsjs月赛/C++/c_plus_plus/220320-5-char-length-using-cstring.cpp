//
// Created by Oscar Fan on 2022/3/20.
//
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[100];
    cin >> a;
    // len
    cout << strlen(a) << endl;
    cout << strlen("abcdefghijklmnopqrstuvmxyx 01234567890 ..,.,.,") << endl;
    // += like string
    char a1[11] = "akakak", a2[10] = "bxjs";
    cout << strcat(a1, a2) << endl;
    // copy
    char aa1[1000], aa2[1000];
    cin >> aa1 >> aa2;
    strcpy(aa1, aa2);
    cout << aa1<< endl;
    // compare: same > 0 first big > 1 second big > -1
    char aa[100], aaa[10000];
    cin >> aa >> aaa;
    cout << strcmp(aa, aaa);

    return 0;
}
