#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printList(int* list, int length) {
	for (int i=0; i<length; i++) {
		printf("%d ",list[i]);
	}
	printf("\n");
}

int main(int argc, char* argv[]) {
	int nums[] = {1, 2, 3, 4, 5};
	int* nums2 = (int*) malloc(sizeof(int)*5);
    memset(nums2, 0, sizeof(int)*5);
    for (int i=0; i<5; i++) {
    	nums2[i] = i+1;
    }
    printf("nums: ");
    printList(nums, 5);
    printf("nums2: ");
    printList(nums2, 5);

    // nums = realloc(nums, 6);
    nums2 = (int*) realloc(nums2, 6);

    nums2[5] = 6;
    printList(nums2, 6);

    nums2 = (int*) realloc(nums2, 4);
    printList(nums2, 4);
    printList(nums2, 6);

}
