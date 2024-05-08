#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10]; 
    char *secret = "USF"; 

    printf("Enter your name: ");
    scanf("%s", buffer); 

    printf("Hello, %s!\n", buffer); 

    printf("The secret is: %s\n", secret);

    return 0;
}
