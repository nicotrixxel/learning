#include <stdio.h>

int main() {
    int a;

    for(a = 0; a < 10; a++) {
        int c = getchar();
        if(c == 'y')
        {
            printf("quit \n");
            continue; //break & continue
        }
        printf("a is %d\n", a);
    }
    printf("Done! \na is %d\n", a);

    int b = 0;
    do {
        printf("b is %d\n", b);
        b++;
    } while(b < 10); //checking after 1 onetime

    return 0;
}