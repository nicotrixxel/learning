#include <stdio.h>

int main() {
    int a = 4;
    int b = -3;

    while(a <= 20) {
        while(b < 0) {
            printf("b is %d \n", b);
            b++;
        }
        printf("a is %d \n", a);
        a++;
    }

    return 0;
}