#include <stdio.h>

void riv (int x);

int main ()
{
	int x1, x2, x3;
	
	printf("\nvvedite 3 shesla sherez probel: ");
	scanf("%d %d %d", &x1, &x2, &x3);	
	printf("\n\nshisla v diapazone ot -5 do 8:");
	riv(x1);
	riv(x2);
	riv(x3);
	
	return 0;
}

void riv (int x)
{
	int p;
	if ((x >= -5)&&(x <= 8)) {
		printf ("  %d", x);
	} else {}
}