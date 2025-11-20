#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    const char *filename = "myfile.txt";
    const char *text = "Hello system programming";
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    write(fd, text, 24);
    close(fd);


    return 0;
}