// Made By OscarFan
// Date:   2022/6/5 上午 09:18
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
#include "cstdio"


using namespace std;

int main() {
//    freopen("duck.in", "r", stdin);
//    freopen("duck.out", "w", stdout);
    // 老赵赶着鸭子去每个村庄卖，每经过一个村子卖去所赶鸭子的一半又一只。这样他经过了七个
    //村子后还剩 n 只鸭子，问他出发时共赶多少只鸭子？
    int n;
    cin >> n;
    // f(x-1) = f(x)/2 - 1
    // f(n+1) = (n+1)*2
    int arr[8] = {0, 0, 0, 0, 0, 0, 0, n};
    for (int i = 6; i >= 0; i--){
        arr[i] = (arr[i+1]+1)*2;
    }
    cout << arr[0];
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}