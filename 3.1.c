#include <stdio.h>

int main ()
{
	float s, y;
	
	printf("\nVvedite 's': ");
	scanf("%f", &s);
	
	if ((-3 <= s)&&(s <= 5)) {
		y = s * s;
		printf("\nf(s)= %.2f", y);
	} else {
		y = 6 * s;
		printf("\nf(s)= %.2f", y);
	}
	
	return 0;
}