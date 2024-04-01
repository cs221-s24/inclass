#include <stdio.h>
#include <stdlib.h>

void printList(int* list, int length) {
	for (int i=0; i<length; i++) {
		printf("%d ",list[i]);
	}
	printf("\n");
}

int main(int argc, char* argv[]) {
	int nums[] = {1, 2, 3, 4, 5};
	int* nums2 = realloc(nums, 6);
	nums2[5] = 6;
	printList(nums2, 6);

}