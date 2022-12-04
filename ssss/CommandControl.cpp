#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cstring>

void my_system(const char *cmd) {
    char result[10240] = {0};
	char buf[1024] = {0};
    FILE *fp = NULL;

    if( (fp = popen(cmd, "r")) == NULL ) {
        printf("popen error!\n");
        return;
    }

    while (fgets(buf, sizeof(buf), fp)) {
        strcat(result, buf);
    }
    
    pclose(fp);
    printf("result: %s\n", result);
    
}

int main(int argc, char const *argv[])
{
    my_system("which git");
    my_system("where git");
    // my_system("ls -l");
    return 0;
}

// using namespace std;

// /*
// 命令控制：
// 检查是否有git
// 进行以下操作：
//     init
//     add remote
//     commit
//     push
//     add

// */

// bool check_git() { 
//     // check if git exist and could be runned
    
// }
