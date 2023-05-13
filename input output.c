#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;

    printf("Press 5: ");
    c = getchar();

    if (c != '5') {
        while(c != '5') {
            printf("Press 5: ");
            c = getchar();
        }
        
    putchar(c);

    return 0;
}
