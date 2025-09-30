#include <stdio.h>

// ฟังก์ชัน swap ใช้ pointer มาช่วยสลับค่าระหว่าง a และ b
void swap(int *a, int *b) {
    int temp;      // ตัวแปรชั่วคราวเก็บค่า
    temp = *a;     // เก็บค่าที่ pointer a ชี้อยู่
    *a = *b;       // เอาค่าของ b มาใส่ a
    *b = temp;     // เอาค่าที่เก็บใน temp มาใส่ b
}

int main() {
    int a = 5, b = 10;   // ประกาศตัวแปร a และ b

    printf("Before swap: a = %d, b = %d\n", a, b);  // แสดงค่าก่อนสลับ

    swap(&a, &b);   // เรียกใช้ฟังก์ชัน swap โดยส่ง address ของ a และ b เข้าไป

    printf("After swap: a = %d, b = %d\n", a, b);   // แสดงค่าหลังสลับ

    return 0;
}
