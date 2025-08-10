#include <stdio.h>

int main() {
    double x1, x2, y = 2, z = 3, a = 4;
    double total1, total2, price = 100, quantity = 2, discount = 20;
    double rate = 5;
    int score1, score2, penalty = 10, mistake = 2;

    // ----------------- Line 1 -----------------
    x1 = x2 = 10.0;
    x1 = x1 - 4.0;       // Full
    x2 -= 4.0;           // Short
    printf("1. x1 = %.1f, x2 = %.1f  // Subtract 4.0 → expect 6.0\n", x1, x2);

    // ----------------- Line 2 -----------------
    x1 = x2 = 10.0;
    x1 = 6.5 * x1;
    x2 *= 6.5;
    printf("2. x1 = %.1f, x2 = %.1f  // Multiply by 6.5 → expect 65.0\n", x1, x2);

    // ----------------- Line 3 -----------------
    x1 = x2 = 20.0;
    x1 = (int)x1 % (int)(y + z * a);   // Explicit cast to int for modulus
    x2 = (int)x2 % (int)(y + z * a);
    printf("3. x1 = %.1f, x2 = %.1f  // Modulo with (y + z*a = 14) → expect 6.0\n", x1, x2);

    // ----------------- Line 4 -----------------
    x1 = x2 = 20.0;
    x1 = x1 / (2.0 * a);     // = 20 / 8 = 2.5
    x2 /= (2.0 * a);
    printf("4. x1 = %.2f, x2 = %.2f  // Divide by (2.0 * 4) → expect 2.5\n", x1, x2);

    // ----------------- Line 5 -----------------
    total1 = total2 = 0.0;
    total1 = total1 + (price * quantity - discount);  // = 0 + (100*2 - 20) = 180
    total2 += (price * quantity - discount);
    printf("5. total1 = %.1f, total2 = %.1f  // total += (price*quantity - discount) → expect 180.0\n", total1, total2);

    // ----------------- Line 6 -----------------
    x1 = x2 = 100.0;
    x1 = x1 * (1 + rate / 100);  // = 100 * 1.05 = 105
    x2 *= (1 + rate / 100);
    printf("6. x1 = %.1f, x2 = %.1f  // x *= (1 + rate/100) → expect 105.0\n", x1, x2);

    // ----------------- Line 7 -----------------
    score1 = score2 = 100;
    score1 = score1 - (penalty * (mistake + 1));  // = 100 - (10*3) = 70
    score2 -= (penalty * (mistake + 1));
    printf("7. score1 = %d, score2 = %d  // score -= penalty*(mistake+1) → expect 70\n", score1, score2);

    return 0;
}