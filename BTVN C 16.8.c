#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];
    char *ptr1, *ptr2;
    int len, i;
    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    len = strlen(inputString);
    if (inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
        len--;
    }
    ptr1 = inputString;
    ptr2 = reverseString + len - 1;
    for (i = 0; i < len; i++) {
        *ptr2-- = *ptr1++;
    }
    reverseString[len] = '\0';
    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

