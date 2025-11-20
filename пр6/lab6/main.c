#include "filelib.h"
#include <stdio.h>

int main(){
    printf("Это обычный вывод stdout\n");
    fprintf(stderr, "Сообщение ошибки stderr\n");
    save_message("log.txt", "start");
    save_message("log.txt", "success");
    return 0;
}