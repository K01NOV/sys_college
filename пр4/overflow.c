#include <stdio.h>

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++){
        arr[i] = i * 10;
        printf("%d\n", arr[i]);
    }

    return 0;
}