#include <stdio.h>

int main() {
    // Variables for w06-02-01
    int i = 1, j = 2, k;

    // Variables for w06-02-02
    double x = 1.0, y = 2.0, z;

    // Table Header
    printf("+------+------+------+------+     +------+------+------+------+\n");
    printf("| Ln   |  i   |  j   |  k   |     | Ln   |  x   |  y   |  z   |\n");
    printf("+------+------+------+------+     +------+------+------+------+\n");

    // Line 1
    printf("|  1   |  %d   |  %d   |      |     |  1   | %.1f | %.1f |      |\n", i, j, x, y);

    // Line 2
    k = i + j;
    x = y + 5.0;
    printf("|  2   |  %d   |  %d   |  %d   |     |  2   | %.1f | %.1f |      |\n", i, j, k, x, y);

    // Line 3
    i = i * (k + j);
    y = x / 2.0;
    printf("|  3   |  %d   |  %d   |  %d   |     |  3   | %.1f | %.1f |      |\n", i, j, k, x, y);

    // Line 4
    j = i / 2;
    y = (x * 3.0) + 4.0;
    printf("|  4   |  %d   |  %d   |  %d   |     |  4   | %.1f | %.1f |      |\n", i, j, k, x, y);

    // Line 5
    k = i % 2;
    x = -0.5 - y;
    printf("|  5   |  %d   |  %d   |  %d   |     |  5   | %.1f | %.1f |      |\n", i, j, k, x, y);

    // Line 6
    i = (j + k) * 3;
    z = x + y;
    printf("|  6   |  %d   |  %d   |  %d   |     |  6   | %.1f | %.1f | %.1f |\n", i, j, k, x, y, z);

    // Table Footer
    printf("+------+------+------+------+     +------+------+------+------+\n");

    return 0;
}