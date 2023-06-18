#include <stdio.h>

int main() {
    // This is a comment
    printf("Hello World\n");
    printf("\"I like pizza\" - Nico\n");

    int x; //declaration
    x = 123;
    int y = 234;
    int age;
    float gpa = 2.04;
    char name[25];

    printf("What's your name?");
    fgets(name, 25, stdin);
    printf("\nHello %s!\n", name);
    printf("How old are you? ");
    scanf("%d", &age);
    printf("\n You are %d years old \n", age);
    return 0;
}