#include <stdio.h>
#include <locale.h>

int main (void)
{
	float a;
	
	setlocale(LC_ALL,"Russian");
	printf("\n\n������� ����� � ������� _._ :  ");
	scanf("%f", &a);
	if ((a >= 5.00)&&(a <= 11.30)) {
		printf("\n\n\t\t������ ����!\n\n");
	} else {
		if ((a > 11.30)&&(a <= 17.30)){
			printf("\n\n\t\t������ ����!\n\n");
		} else {
			if ((a > 17.30)&&(a <= 21.00)){
				printf("\n\n\t\t������ �����!\n\n");
			} else {
				if ((a > 21.00)&&(a <= 23.59)){
					printf("\n\n\t\t��������� ����!\n\n");
				} else {
					if ((a > 00.00)&&(a <= 5.0)){
						printf("\n\n\t\t��� ����!\n\n");
					} else {
						
					}
				}
			}
		}
	}
	
	return 0;
}