/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    反转元音字母
    【题目描述】
    给定一个单词str，只含有大写字母和小写字母，请反转这个单词中的元音字母，元音字母包含a、e、i、o、u

    输入:
    一个单词str，1<=strlen(str)<=100000

    输出:
    反转元音之后的单词

    【样例输入1】:
    hello
    【样例输出1】:
    holle

    【样例输入2】:
    TONGChengtongmei
    【样例输出2】:
    TiNGChengtongmeO
    */
    string str;
    cin >> str;
    int i = 0, j = str.size() - 1;
    while (i < j) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U') {
                swap(str[i], str[j]);
                i++;
                j--;
            } else {
                j--;
            }
        } else {
            i++;
        }
    }
    cout << str << endl;
    
    return 0;
}
