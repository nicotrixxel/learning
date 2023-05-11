#include <stdio.h>
#include <string.h>



int main() {

    char myString[] = "Hi";
    char myString2[] = "test";
    char result[10];

    strcat(myString, myString2);

    printf("%s\n", myString2);

    return 0;
}