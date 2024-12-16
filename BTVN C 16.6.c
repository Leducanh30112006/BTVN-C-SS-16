#include <stdio.h>

int timKiem(int *arr, int n, int giaTriTimKiem) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == giaTriTimKiem) {
            return i;
        }
    }
    return -1;
}
int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int n = sizeof(mang) / sizeof(mang[0]);
    int giaTriTimKiem = 3;
    int viTri = timKiem(mang, n, giaTriTimKiem);
    if (viTri != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d\n", giaTriTimKiem, viTri);
    } else {
        printf("Gia tri %d khong duoc tim thay trong mang\n", giaTriTimKiem);
    }
    return 0;
}

