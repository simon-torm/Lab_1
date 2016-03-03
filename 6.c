#include <stdio.h>

void PORA (int a, int m1, int m2, char pora[6]);

int main ()
{
	int a;
	printf("\nVvedite nomer mesaca: ");
	scanf("%d", &a);
	PORA (a, 3, 5, "Vesna.");
	PORA (a, 6, 8, "Leto.");
	PORA (a, 9, 11, "Osin.");
	PORA (a, 1, 2, "Zima.");
	PORA (a, 12, 12, "Zima.");
	
	return 0;
}

void PORA (int a, int m1, int m2, char pora[6])
{
	if ((a >= m1)&&(a <= m2)) {
		printf ("\n%s", pora);
	} else {
		printf("");
	}
}