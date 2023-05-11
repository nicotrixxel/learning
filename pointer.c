#include <stdio.h>


int main() {

    int a[3] = {42,1337,50};
    int i;
    int *ptr;

    ptr = a;
    printf("%d\n", *(ptr + 2));


    return 0;
}