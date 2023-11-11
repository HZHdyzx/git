#include <stdio.h>

int main() {
	unsigned int x1 = 65535;
	int x2 = -3;
	float y1 = 123.4567, y2 = 123.4500;
	printf("x1=%d,%o,%x,%u\n", x1, x1, x1, x1);
	printf("x2=%d,%o,%x,%u\n", x2, x2, x2, x2);
	printf("y1=%10f,%10.3f,%.3f,%-10.3f\n", y1, y1, y1, y1);
	printf("y2=%f,%e,%g\n", y2, y2, y2, y2);
	printf("x1(%%4d)=%4d", x1);

	return 0;
}
