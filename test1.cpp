#include <stdio.h>

int main() {
	short i;
	long j;
	double x;
	long double y;
	scanf("%hd %ld %lf %Lf", &i, &j, &x, &y);
	printf("i=%hd,j=%ld,x=%lf,y=%Lf\n", i, j, x, y);


	return 0;
}
