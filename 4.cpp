#include <stdio.h>

int main (void)
{
	float a;
	
	printf("\n\nVvedite vrema v formate _._ :  ");
	scanf("%f", &a);
	if ((a >= 5.00)&&(a <= 11.30)) {
		printf("\n\n\t\tDobroe utro!\n\n");
	} else {
		if ((a > 11.30)&&(a <= 17.30)){
			printf("\n\n\t\tDobruy den!\n\n");
		} else {
			if ((a > 17.30)&&(a <= 21.00)){
				printf("\n\n\t\tDobruy vesher!\n\n");
			} else {
				if ((a > 21.00)&&(a <= 23.59)){
					printf("\n\n\t\tSpokoynoy noshi!\n\n");
				} else {
					if ((a > 00.00)&&(a <= 5.0)){
						printf("\n\n\t\tUge nosh!\n\n");
					} else {
						
					}
				}
			}
		}
	}
	
	return 0;
}
