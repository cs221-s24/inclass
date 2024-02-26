#include <stdio.h>

int main(int argc, char* argv[]) {
    int nums[5] = {10, 4, 8, 3, 7};    
    printf("%d\n", nums+3);
    printf("%d\n", *(nums+3));
//    printf("%d\n", &(nums+3));
    printf("%d\n", *nums+3);

    char name[] = "49ers";
    printf("%p\n", name);
    printf("%p\n", &name[0]);
    printf("%c\n", *name);
    printf("%d\n", name);
}
