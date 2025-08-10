#include <stdio.h>

int main() {
    // กำหนดค่าตัวแปรเริ่มต้น
    int a = 5, b = 2;
    float x = 3.0, y = 4.5;

    // 1. int r1 = a++ * b + (int)y % 3;
    // a++ = 5 (ใช้ค่าก่อนเพิ่ม), b=2, (int)y=4, 4%3=1
    // r1 = 5*2 + 1 = 10 + 1 = 11, a จะเพิ่มเป็น 6 หลังคำสั่งนี้
    int r1 = a++ * b + (int)y % 3;

    // 2. int r2 = (a > b) && ((int)x / b < 2);
    // a=6, b=2, x=3.0, (int)x=3
    // (a>b) = true (1)
    // ((int)x / b) = 3/2=1 < 2 => true (1)
    // r2 = 1 && 1 = 1
    int r2 = (a > b) && ((int)x / b < 2);

    // 3. float r3 = ++x * y - a / 2;
    // ++x = 4.0 (x เพิ่มก่อนใช้), y=4.5, a=6
    // r3 = 4.0 * 4.5 - 6 / 2 = 18.0 - 3 = 15.0
    float r3 = ++x * y - a / 2;

    // 4. float r4 = ((x += 1.5) > y) || (b-- > 0);
    // x=4.0 (จาก ++x ข้างบน)
    // x +=1.5 => x=5.5
    // (5.5 > 4.5) = true (1)
    // b=2, b-- >0 ก็ true แต่จะไม่ถูกตรวจเพราะ OR short-circuit
    // r4 = 1 (true), b ลดลงเป็น 1 หลังคำสั่งนี้
    float r4 = ((x += 1.5) > y) || (b-- > 0);

    // แสดงผลลัพธ์ (float แสดงทศนิยม 2 ตำแหน่ง)
    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);
    printf("r3 = %.2f\n", r3);
    printf("r4 = %.0f\n", r4); // true/false แสดงเป็น 1 หรือ 0

    // แสดงค่าตัวแปรที่เปลี่ยนแปลงเพราะ post/pre increment/decrement
    printf("a = %d, b = %d, x = %.2f, y = %.2f\n", a, b, x, y);

    return 0;
}