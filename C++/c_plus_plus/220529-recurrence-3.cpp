// Made By OscarFan
// Date:   2022/5/29 上午 10:13
//
//
//    =================╗     ===============\      ===============\
//   /         ~~~     ║    /  ===========\ ║     /  ===========\ ║  
//   ║  ===============╝    ║ /           ║ ║     ║ /           ║ ║  
//   ║ /                    ║ ║    YO~    ║ ║     ║ ║    HI~    ║ ║   
//   ║ ║                    ║ ║           ║ ║     ║ ║           ║ ║  
//   ║ ║                    ║ ║===========+ ║     ║ ║===========+ ║  
//   ║ ║                    ║ ║=============╝     ║ ║=============╝                     
//   ║ ║                    ║ ║                   ║ ║    
//   ║ \===============╗    ║ ║                   ║ ║    
//   \         ~~~     ║    ║ ║                   ║ ║    
//    =================╝    ╚═╝                   ╚═╝   
//  
//    No Bugs forever~~~
//   
//
//    Description:
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    int num;
    cin >> num;
    int sums[100] = {0};
    sums[num+1] = 1;
    for (int i = num; i >= 0; i--){
        sums[i] = sums[i+1] * 3 + 1;
    }
    cout << sums[1];
    return 0;
}
