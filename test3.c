#include <stdio.h>

int main() {
	int i2 = -1;
	char c = 'A';
	printf("%*c", i2 & 0xf, '*');
	return 0;
}
