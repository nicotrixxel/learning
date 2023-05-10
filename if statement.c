#include <stdio.h>


int main() {

    int a = 0;
    int b = 1;
    a++;

    printf("a + b is %d\n", a);

    if(b >= 0 || a == 0) {
        printf("b is < 0\n");
    }
    else if(b == 1) {
        printf("b = 1");
    }
    else {
        printf("b is not 0 or 1");
    }


    return 0;
}