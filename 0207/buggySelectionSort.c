#include <stdio.h>

void selectionSort(int* nums, int length) {
    for (int i=0; i<length-1; i++) {
        int minIndex = i; 
        for (int j=i; j<length; j++) {
            if (nums[minIndex] > nums[j]) {
                minIndex = j;
            }
        }
        int temp = nums[minIndex];
        nums[i] = temp;
        nums[minIndex] = nums[i];
    }
}

void printArray(int* a, int length) {
    for (int i=0; i<length; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    int nums[] = {1, 5, 3, 4, 2};
    int length = sizeof(nums)/sizeof(nums[0]);
    selectionSort(nums, length);
    printArray(nums, length);
}
