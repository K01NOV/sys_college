#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    
    if(pid == 0){
        printf("I'm a child, here's my PID: %d\n", getpid());
        printf("Here's my parent's PID: %d\n", getppid());
    } else if(pid > 0){
        printf("I'm a parent, here's my PID: %d\n", getpid());
        printf("Here's my child's PID: %d\n", pid);
        wait(NULL);
    }

    return 0;
}