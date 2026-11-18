#include <stdio.h>

int main() {
    for (int num = 100; num <= 999; num++) {
        int a = num % 10;
        int b = num / 10 % 10;
        int c = num / 100;

        if (c != (a + b) % 10)
            continue;

        int prime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
            printf("%d\n", num);
    }

    return 0;
}