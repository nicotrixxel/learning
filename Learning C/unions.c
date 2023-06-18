#include <stdio.h>
#include <string.h>

union hello; 

union hello { //unions entweder oder system | struct beide
    int a; 
    int b;
};

int main() {
    union hello x;
    x.a = 42;
    x.b = 'a'
    printf("%d\n", x.a);

    return 0;
}
