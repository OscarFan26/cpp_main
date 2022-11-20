// <-> Made By OscarFan <->
// <-  Description:
/*
 *      
*/
// ->
// Hope there are no bugs in this file.
# include <iostream>
using namespace std;


int main() {
    // fibo
    int fibo[10001], num;
    cin >> num;
    fibo[0] = 1; fibo[1] = 1;
    for (int i = 2; i <= num; i++)
        fibo[i] = fibo[i-2] + fibo[i-1];
    cout << fibo[num-1] << " ";
    return 0;
}