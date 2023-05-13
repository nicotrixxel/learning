#include <stdio.h>
#include <string.h>

int main() {

    FILE *ptr;
    char buffer[255];
    ptr = fopen("test.txt", "r");

    char c;

    do{
        c = fgetc(ptr);
        printf("%c", c);
    }while(c != EOF);

    return 0;
}