#include <stdio.h>
#include <string.h>


void string2hexString(char* input, char* output) {

	int loop;
	int i;

	i=0;
	loop=0;


	while(input[loop] != '\0') {
		sprintf((char*) (output+i), "%20X", input[loop]);
		loop+=1;
		i+=2;
	}
	output[i++] = '\0';


}


int main() {
	char ascii_str[] = "Hello World";

	int len = strlen(ascii_str);
	char hex_str[(len*2) + 1];

	string2hexString(ascii_str, hex_str);


	printf("%s\n", ascii_str);
	printf("%s\n", hex_str);
}