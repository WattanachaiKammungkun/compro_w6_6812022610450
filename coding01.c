#include <stdio.h>

int main() {
    // ประกาศตัวแปรตามที่โจทย์กำหนด
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // 1. แสดงค่าเริ่มต้นของตัวแปรทั้งหมด
    printf("1. a = %d, b = %d, c = %.1f, d = %.1f\n", a, b, c, d);
    // ไม่มี error ใช้ %d สำหรับ int และ %.1f สำหรับ float

    // 2. d + a
    printf("2. d + a = %.1f\n", d + a);
    // float + int ได้ผลลัพธ์เป็น float ไม่มี error

    // 3. a - b
    printf("3. a - b = %d\n", a - b);
    // int - int ได้ผลลัพธ์เป็น int ไม่มี error

    // 4. c * d
    printf("4. c * d = %.2f\n", c * d);
    // float * float ได้ผลลัพธ์เป็น float ไม่มี error

    // 5. a * c
    printf("5. a * c = %.2f\n", a * c);
    // int * float ได้ผลลัพธ์เป็น float ไม่มี error

    // 6. c / d
    printf("6. c / d = %.2f\n", c / d);
    // float / float ได้ผลลัพธ์เป็น float ไม่มี error

    // 7. b / c
    printf("7. b / c = %.2f\n", b / c);
    // int / float ได้ผลลัพธ์เป็น float ไม่มี error

    // 8. a % b
    printf("8. a %% b = %d\n", a % b);
    // ใช้ % กับจำนวนเต็ม int ได้ตามปกติ ไม่มี error

    // 9. (int)c % a
    printf("9. (int)c %% a = %d\n", ((int)c) % a);
    // แปลง c เป็น int ก่อนใช้ % เพื่อหลีกเลี่ยง error

    // 10. (int)c % (int)d
    printf("10. (int)c %% (int)d = %d\n", ((int)c) % (int)d);
    // แปลงทั้ง c และ d เป็น int ก่อนใช้ % ไม่มี error

    return 0;
}