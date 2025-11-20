#include <unistd.h>
#include <fcntl.h>

void save_message(const char *filename, const char *message){
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    write(fd, message, 7);
    close(fd);
}