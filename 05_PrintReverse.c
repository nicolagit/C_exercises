#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
	size_t len = strlen(s);
	char *t = s + len -1;
	while ( t >= s ) {
		printf("%c", *t);
		t = t - 1;
	}
	puts("");
}

int main() {
	char string[20];
	printf ("Enter your string: \n");
	fgets(string,20,stdin);
	print_reverse(string);
	return 0;
}

