#include <stdio.h>
#include <string.h>

struct Video
{
    int time;
    char author[50];
};

void printVideo(struct Video vid);
int main() {
    struct Video Video1;
    Video1.time = 10;
    strcpy(Video1.author, "Nico");
    printVideo(Video1);

    struct Video Video2;
    Video2.time = 35;
    strcpy(Video2.author, "Joshua");
    printVideo(Video2);

    return 0;
}

void printVideo(struct Video vid) {
    printf("Length: %d\n", vid.time);
    printf("Author: %s\n", vid.author);
}