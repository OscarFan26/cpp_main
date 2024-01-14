// Made By OscarFan
// Date:   2022/5/29 上午 11:22
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
    int lines;
    cin >> lines;
    int arr[lines][lines] = {};
    arr[0][0] = 1; arr[1][0] = 1; arr[1][1] = 1;
    for (int i = 2; i < lines; i++) {
            for (int j = 0; j < lines; j++) {
                if (j == 0) arr[i][0] = 1;
                else {
                    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
                }
            }
    }
    for (int i = 0; i < lines; i ++){
        for (int j = 0; j <= i; j ++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}