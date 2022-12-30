/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

struct card
{
    string name;
    int value;
};

card cards[26];

int card_to_int(string name) {
    string val[13] = {"3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2"};
    for (int i = 0; i < 13; i++) if (name == val[i])  return i + 3;
}

int binarySearch(int start, int end, card insertion) {
    while (start <= end) {
        int mid = (start + end) / 2;
        if (insertion.value == cards[mid].value) {
            return mid;
        }
        else if (insertion.value < cards[mid].value) {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return start;
}

void insert(int x) {
    card m = cards[x + 1];
    int t = binarySearch(1, x, m);
    if (t != x + 1) {
        for (int i = x; i >= t; i--) {
            cards[i + 1] = cards[i];
        }
        cards[t] = m;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string value;
        cin >> value;
        cards[i].name = value;
        cards[i].value = card_to_int(value);
    }
    cin >> cards[n + 1].name;
    cards[n + 1].value = card_to_int(cards[n + 1].name);
    insert(n);
    for (int i = 1; i <= n + 1; i++) {
        cout << cards[i].name << " ";
    }
}
