#include <stdio.h>

int main() {
    function();
    printf("main\n");
    return 0;
}

int function() {
    printf("function\n");
    function2();
}

int function2() {
    printf("function2\n");
}