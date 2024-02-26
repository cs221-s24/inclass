#include <stdio.h>

int main (int argc, char* argv[]) {

    //FILE* fopen(const char* path, const char* mode)
    FILE* fs = fopen(argv[1], "r");

    int num = 0;

   //fscanf returns the number of items read if successful
    while (fscanf(fs, "%d", &num) == 1) {
        printf("%d\n", num);
    }

    //FILE* fclose(FILE* stream)
    fclose(fs);
}
