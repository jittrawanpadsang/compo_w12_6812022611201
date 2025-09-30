#include <stdio.h>

int main() {
    int x = 10;     // ประกาศตัวแปร x และกำหนดค่าเริ่มต้นเป็น 10
    int *ptr;       // ประกาศตัวแปร pointer ชื่อ ptr ที่จะเอาไว้เก็บ address ของ int

    ptr = &x;       // ให้ ptr ชี้ไปที่ address ของ x

    printf("Before: x = %d\n", x);   // แสดงค่าของ x ก่อนเปลี่ยน

    *ptr = 20;      // ใช้ pointer เปลี่ยนค่าที่ address ของ x จาก 10 → 20

    printf("After: x = %d\n", x);    // แสดงค่าของ x หลังเปลี่ยน

    return 0;
}
