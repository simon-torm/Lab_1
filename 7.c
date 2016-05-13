#include <stdio.h>

int main ()
{
	int year, x, x2, x3;
	
	printf("\nVvedite god: ");
	scanf("%d", &year);
	
	x = year%4;
	x2 = year%100;
	x3 = year%400;
	
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
