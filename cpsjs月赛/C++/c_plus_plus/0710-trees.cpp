/*
 * @OscarFan 制作 : 
 * @Date: 2022-07-01 21:20:07
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int data[m][2] = {};
    int trees[n] = {};
    for (int i = 0; i < m; i++) cin >> data[i][0] >> data[i][1];
    for (int i = 0; i < m; i++){
        for (int j = data[i][0]; j <= data[i][1]; j++)
            trees[j]++;
    }
    int counter = 0;
    for (int i = 0; i < n; i++)
        if (!trees[i]) counter++;
    cout << counter << endl;
    return 0;
}
