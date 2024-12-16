#include <stdio.h>

void hoanDoi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5;
    int y = 10;
    printf("Truoc khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);
    hoanDoi(&x, &y);
    printf("Sau khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

