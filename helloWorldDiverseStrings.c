#include <stdio.h>
#include <string.h>

int get_string_length(char * str) {

	int offset = 0;
	
	while (str[offset] != 0 ) {
		offset++;
	}

	return offset;
}

void copy_string(char *from, char *to) {
	int offset=0;

	while(str[offset] != 0) {
		to[offset] = from[offset];
		offset++;
	}
	to[offset] = 0;
}


int main() {
	char *str1 = "Hello World!";
	char str2[] = "Hello World!";

	printf("Hello World!\xA");
	printf("%s\xA", str1);
	printf("%s\xA", str2);

	printf("Hello World!\n");
	printf("Hello World! \\");
}