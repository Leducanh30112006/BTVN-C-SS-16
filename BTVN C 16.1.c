#include <stdio.h>

int main() {
    int n = 10;
    int *ptr = &n;
    printf("Gia tri cua bien : %d\n", ptr);
    printf("Dia chi cua bien : %p\n", (void*)&n);
    printf("Gia tri cua bien thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua bien thong qua con tro: %p\n", (void*)ptr);

    return 0;
}

