// Made By OscarFan
// Date:   2022/5/29 上午 11:47
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
    // THE MAGIC NUMBER
    int num;
    cin >> num;
    int start = num*(num-1)+1-2;
    for (int i = 0; i < 5; i++){
        cout << start+2 << ' ';
        start += 2;
    }
    return 0;
}