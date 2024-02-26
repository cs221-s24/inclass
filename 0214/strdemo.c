#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char* str = argv[1];
	printf("%s\n",str);
	str[5] = '\0';
	printf("%s\n",str);

	for (int i=0; i< 10; i++) {
		if (str[i]=='\0') {
			printf("?");
		}
		printf("%c", str[i]);
	}
	printf("\n");

	printf("length of str = %d\n", strlen(str));
	for (int i=0; i< strlen(str); i++) {
		printf("%c", str[i]);
	}
	printf("\n");
}