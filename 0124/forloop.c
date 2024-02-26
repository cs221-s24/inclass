#include <stdio.h>

int main (int argc, char* argv[]) {
    int a[] = {1, 2, 4, 3, 7, 12};
    int aLength = sizeof(a)/sizeof(a[0]);
    for (int i=0; i<aLength; i++)  {
        printf("%d\n", a[i]);
    }
    char name[] = "EJ";
    printf("%s\n", name);
}
