#include <stdio.h>

int main() {
    int a = 4;
    int b = -3;

    char note = 'B';
    switch(note) {
        case 'A':
            printf("best note \n");
            break;
        case 'B':
            printf("solid note \n");
            break;
        case 'C':
        case 'D':
        case 'F':
        default:
            printf("This is not a note! \n");
            break;
    }

    return 0;
}