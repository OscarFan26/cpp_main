#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr[100000], a[26] = {};
    cin >> arr;
    for (int i = 0;i <= strlen(arr); i++) { a[arr[i] - 97]++; }
    for (int i = 0; i < strlen(arr); i++) {
        if (a[arr[i] - 97] == 1) {
            cout << arr[i];
            return 0;
        }
    }
    cout << "no";
    return 0;
}