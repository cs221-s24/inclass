#include <stdio.h>
#include <limits.h>

int main(int argc, char* argv[]) {
   int num = INT_MAX;
   printf("num = %d %x\n", num, num); 
   num++;
   printf("num = %d %x\n", num, num); 
   printf("num = %u %x\n", num, num); 
}
