
#include <stdio.h>

int global_var = 10; 

void function() {
    static int static_var = 0;  
    int local_var = 5;          

    printf("Local variable: %d, Static variable: %d, Global variable: %d\n", local_var, static_var, global_var);
    static_var++;  
}

int main() {
    for (int i = 0; i < 3; i++) {
        function();
    }

    return 0;
}