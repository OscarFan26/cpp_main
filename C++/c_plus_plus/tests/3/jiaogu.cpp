// Made By OscarFan
// Date:   2022/6/5 上午 09:32
//
//
//                                                                                   
//          CCCCCCCCCCCCC          PPPPPPPPPPPPPPPPP             PPPPPPPPPPPPPPPPP   
//       CCC::::::::::::C          P::::::::::::::::P            P::::::::::::::::P  
//     CC:::::::::::::::C          P::::::PPPPPP:::::P           P::::::PPPPPP:::::P 
//    C:::::CCCCCCCC::::C          PP:::::P     P:::::P          PP:::::P     P:::::P
//   C:::::C       CCCCCC            P::::P     P:::::P            P::::P     P:::::P
//  C:::::C                          P::::P     P:::::P            P::::P     P:::::P
//  C:::::C                          P::::PPPPPP:::::P             P::::PPPPPP:::::P 
//  C:::::C                          P:::::::::::::PP              P:::::::::::::PP  
//  C:::::C                          P::::PPPPPPPPP                P::::PPPPPPPPP    
//  C:::::C                          P::::P                        P::::P            
//  C:::::C                          P::::P                        P::::P            
//   C:::::C       CCCCCC            P::::P                        P::::P            
//    C:::::CCCCCCCC::::C          PP::::::PP                    PP::::::PP          
//     CC:::::::::::::::C          P::::::::P                    P::::::::P          
//       CCC::::::::::::C          P::::::::P                    P::::::::P          
//          CCCCCCCCCCCCC          PPPPPPPPPP                    PPPPPPPPPP          
//                                                                                 
//    No Bugs forever~~~
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
    freopen("jiaogu.in", "r", stdin);
    freopen("jiaogu.out", "w", stdout);
    // 输入一个自然数，若为偶数，则把它除以 2，若为奇数，则把它乘以 3 加 1。经过如此有限次
    // 运算后，总可以得到自然数值 1。求经过多少次可得到自然数 1。
    int num, count = 0; cin >> num;
    while (true){
        if (num <= 1) break;
        if (num % 2 == 0) num /= 2;
        else { num *= 3; num += 1; }
        count += 1;
    }
    cout << count;
    fclose(stdin);
    fclose(stdout);
    return 0;
}