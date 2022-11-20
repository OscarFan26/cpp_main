// Made By OscarFan
// Date:   2022/5/29 上午 10:38
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
int main(){
    int i, j, num;
    for (i = 1;; i++) {
        num = i;
        for (j = 0; j < 4; j++) {
            if ((num * 5 + 1) * 5 % 4 != 0)
                break;
            else
                num = (num * 5 + 1) / 4;
        }
        if (j == 4) {
            cout <<  (num * 5 + 1) << endl;
            break;
        }
    }
}
