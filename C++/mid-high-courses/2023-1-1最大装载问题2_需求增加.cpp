/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

struct antique_stuff {
    string name;
    double weigh;
};

int main(){
    int C, n;
    cin >> C >> n;
    antique_stuff antiques[999] = {};
    for (int i = 0; i < n; i++) 
        cin >> antiques[i].name >> antiques[i].weigh;
    
    sort(antiques, antiques+n, [](antique_stuff a, antique_stuff b) {return a.weigh < b.weigh;});
    double present_holds = 0; int ptr = 0;
    while (true) {
        if (present_holds > C) break;
        present_holds += antiques[ptr].weigh;
        if (present_holds > C) break;
        cout << antiques[ptr].name << " ";
        ptr++;
    }
    return 0;
}
