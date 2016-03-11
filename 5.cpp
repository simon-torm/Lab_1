#include <stdio.h>

int main ()
{
	int a, os;
	
	printf("\n\nVvedite vozrast: ");
	scanf("%d", &a);
	os = a%10;
	if ((a > 10)&&(a < 21)) {
		printf("\nVam %d let.", a);
	} else {
		if (os == 1) {
			printf("\nVam %d god.", a);
		} else {
			if ((os > 1)&&(os < 5)) {
			printf ("\nVam %d goda.", a);
		} else {
			printf("\nVam %d let.", a);
			}
		}
	}
	
	return 0;	
}
