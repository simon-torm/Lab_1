#include <stdio.h>

int main ()
{
	int a, x, x2, x3;
	
	printf("\nVvedite god: ");
	scanf("%d", &a);
	
	x = a%4;
	x2 = a%100;
	x3 = a%400;
	
	if ((x2 == 0)&&(x3 != 0)) {
		printf("\nV etom godu 365 dney.\n");
	} else {
		if (x == 0) {
			printf("\nV etom godu 366 dney.\n");
		} else {
			printf("\nV etom godu 365 dney.\n");
		}
	}
	
	return 0;
}