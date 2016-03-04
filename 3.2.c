#include <stdio.h>

int main ()
{
	float s, y;
	
	printf("\nVvedite 's': ");
	scanf("%f", &s);
	
	if (s <= 0) {
		y = 0;
		printf("\nf(s)= %.2f", y);
	} else {
		if ((0 < s)&&(s <= 1)) {
			y = s;
			printf("\nf(s)= %.2f", y);
		} else {
			y = s * s * s;
			printf("\nf(s)= %.2f", y);
		}
	}
	
	return 0;
}