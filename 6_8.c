//program robi wode z mozgow
#include<stdio.h>
int main(void)
{
	int cos;
	float piersza, druga, iloczyn, roznica, wynik;
	printf("podasz mi 2 liczby[dokoncz]\n");
	scanf("%f", &piersza);
	printf("teraz druga\n");
	cos = scanf("%f", &druga);
	printf("no to napierdalamy!\n");
	while(cos=1)
		{
		iloczyn = piersza * druga;
		roznica = piersza - druga;
		wynik = roznica / iloczyn;	//owy wynik sie nie wyswietla
		printf("%f o to kurwa wynik xD\n");
		printf("dawaj kolejne liczby lub (q)uit\n");
		cos = scanf("%f", &piersza);
		printf("nastepna!\n");
		scanf("%f", &druga);
		}		//ta petla sie zjebala
	printf("konczymy program....\n");
	return 0;
}
