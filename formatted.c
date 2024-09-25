// #include <stdio.h>
// int main(){
//     char str[5]="1234";
//     printf("%s\n",str);
//     printf("%3.3s\n",str);
//     printf("%-3.2s\n",str);
//     printf("%-3.1s\n",str);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     char str[8]="MYNEPAL";
//     printf("%s\n",str);
//     printf("%6.6s\n",str);
//     printf("%-6.5s\n",str);
//     printf("%-6.4s\n",str);
//     printf("%-6.3s\n",str);
//     printf("%-6.2s\n",str);
//     printf("%-6.1s\n",str);
//     return 0;
// }


#include <string.h>

int main() {
    char str[] = "Gauranga";
    int len = strlen(str);
    printf("%d\n", len);

    for (int i = 0; i < len; i++) {
        printf("%s\n", str + i);
    }

    return 0;
}