#include <stdio.h>

// ฟังก์ชัน doubleArray รับ pointer ของ array และขนาด array
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;   // คูณค่าทุกตัวด้วย 2
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};   // ประกาศ array
    int size = 5;                // ขนาด array

    // แสดงค่าก่อนเปลี่ยน
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // เรียกใช้ฟังก์ชัน doubleArray
    doubleArray(a, size);

    // แสดงค่าหลังเปลี่ยน
    printf("After: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
