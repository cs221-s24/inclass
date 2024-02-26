#include <stdio.h>

int main(int argc, char* argv[]) {
    int num;
    int* p;
    scanf("%d", &num); //scanf asks for "where" to store the number
    printf("using num: %d is stored at %d\n", num, &num);
    p = &num;
    printf("using *p: %d is stored at %d\n", *p, p);
    printf("&p: %d, p: %d, *p: %d\n", &p, p, *p);
    return 0;
}
