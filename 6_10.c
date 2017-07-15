//program nakurwia salta
#include<stdio.h>
#define dolna dol
int main(void)
{
	int gora, dol, counter, roznica, suma;
	printf("podasz mi najpierw dolna granice:\n");
	scanf("%d", &dol);
	printf("teraz gorno granice kwadratu\n");
	scanf("%d", &gora);
	roznica = gora - dol;
	while(dol<gora)	//zapewnia ciagle wywolywanie
		{
		for(suma = 0 ;dol<=gora ;dol++)	//napierdala kwadraty w pamieci
			suma += (dol * dol);
		printf("%d suma\n", suma);
		printf("prosze ponownie podac granice\n najpierw dolna\n");
		scanf("%d", &dol);
		printf("no i gorna\n");
		scanf("%d", &gora);
		}
	return 0;
}
