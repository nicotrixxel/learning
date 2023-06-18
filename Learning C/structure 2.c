#include <stdio.h>
#include <string.h>

struct Video
{
    int time;
    char author[50];
};

void printVideo(struct Video *vid); //with pointer
int main() {
    struct Video Video1;
    Video1.time = 10;
    strcpy(Video1.author, "Nico");
    printVideo(&Video1);

    return 0;
}

void printVideo(struct Video *vid) {
    printf("Length: %d\n", vid->time);
    printf("Author: %s\n", vid->author);
}