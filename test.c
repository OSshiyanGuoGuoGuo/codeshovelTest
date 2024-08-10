#include <stdio.h>

void add_and_print(int a, int b) {
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
}

int main() {
    int x = 5, y = 10;
    add_and_print(x, y);
    return 0;
}