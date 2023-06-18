#include <stdio.h>

int abc = 5;

int main() {
    int a = 42;
    int b = 1337;
    int result = berechnung(a, b); //result is a
    printf("main %d\n", result);

    int x[10];
    int i;
    for(i = 0; i < 10; i++) {
        x[i] = 42;
        if(i == 5) {
            x[i] = 1337;
        }
    }

    printArray(x, 10);
    return 0;
}

int berechnung(int x, int y) {
    int ret;
    if(x > y) {
        ret = x;
    }
    else {
        ret = y;
    }
    int result = ret + abc;
    return result;
}

void printArray(int *x, int size) {
    int i;
    printf("[");
    for(i = 0; i < size; i++) {
        printf("%d ", x[i]);
    }
    printf("]\n");

}