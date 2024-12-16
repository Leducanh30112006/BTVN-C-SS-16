#include <stdio.h>

int main() {
    int n = 10;
    int *ptr = &n;
    printf("Gia tri cua bien var: %d\n", var);
    printf("Dia chi cua bien var: %p\n", (void*)&n);
    printf("Gia tri cua bien var (thong qua con tro): %d\n", *ptr);
    printf("Dia chi cua bien var (thong qua con tro): %p\n", (void*)ptr);

    return 0;
}

