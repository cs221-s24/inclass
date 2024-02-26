#include <stdio.h>

void mix(int* a, int length) {
    for (int i=0; i<length/2; i++) {
        int temp = a[i];
        a[i] = a[length-i];
        a[length-i] = temp;
    }
}

void printArray(int* a, int length) {
    for (int i=0; i<length; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    int a[] = {1, 2, 3, 4, 5};        
    int length = sizeof(a)/sizeof(a[0]);
    mix(a, length);
    printArray(a, length);
}
