#include <stdio.h>

int main (void)
{
	int a, b;
	
	printf("\n\nVvedite 2 shesla sherez probel: ");
	scanf("%d %d", &a, &b);
	
	if (a > b)
		  printf("\nsamoe bolshoe sheslo: %d\n\n", a);
	else
			printf("\nsamoe bolshoe sheslo: %d\n\n", b);
	
	return 0;
}
