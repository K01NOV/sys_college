#include <stdio.h>

int my_abs(int x){
    if(x < 0){
        return -x;
    }else {
        return x;
    }
}

int main() {
    printf("%d\n", my_abs(-11));
    printf("%d\n", my_abs(11));
    printf("%d\n", my_abs(0));
    return 0;
}