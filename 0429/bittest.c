#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char* argv[]) {
   int num = 0;
   printf("num = %d\n", num); 

   //setting bits 
    num = num | 1;
   printf("num = %d\n", num); 

    // reading bits
    num = num & 1;
   printf("num = %d\n", num); 
    

   // multiplcation by power of 2
   num = num << atoi(argv[1]);
   printf("num = %d\n", num); 


}
