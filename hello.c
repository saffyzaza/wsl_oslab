#include <stdio.h>
#include <unistd.h>
 
int main() {
    printf("Hello, WSL Ubuntu!\n");
    printf("PID: %d\n", getpid());
    return 0;
}
