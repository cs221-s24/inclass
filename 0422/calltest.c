#include <stdio.h>
#include <stdlib.h>

void callee(int i, int *nums) {
  nums[0] = i;
  i *= 100;
  nums[1] = i;
}

int main(int argc, char *argv[]) {
  int nums[2];
  callee(1, nums);
  printf("%d, %d\n", nums[0], nums[1]);
}
