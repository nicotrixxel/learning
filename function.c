#include <stdio.h>

int main() {
    int a = 42;
    int b = 1337;
    int result = berechnung(a, b); //result is a
    printf("main %d\n", result);
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
    return ret;
}