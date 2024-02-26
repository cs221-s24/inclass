#include <stdio.h>

int main(int argc, char* argv[]) {

    for (int i=0; i<argc; i++) {
        printf("%s is stored at %p\n", argv[i], argv[i]);
        printf("%c is stored at %p\n", **argv[i], argv[i]);
    }
}
