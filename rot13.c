#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *rot13(char *string) {
	char *rot13d = malloc(strlen(string));
        for(int i = 0; i < strlen(string); i++) {
                if(string[i] >= 65 && string[i] <= 90) {
                        rot13d[i] = string[i] + 13;
                        if(rot13d[i] > 90) {
                                rot13d[i] = rot13d[i] - 90 + 65 - 1;
                        }
                } else if(string[i] >= 97 && string[i] <= 122) {
                        int j = (int)string[i];
                        j = j + 13;
                        if(j > 122) {
                                j = j - 122 + 97 - 1;
                        }
                        rot13d[i] = j;
                } else {
                        rot13d[i] = string[i];
                }
        }
	return rot13d;
}

int main(int argc, char **argv) {
	printf("%s\n", rot13(argv[1]));
}
