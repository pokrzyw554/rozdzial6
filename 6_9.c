//program robi wode z mozgow
//na chwile obecno program ma zjebano petle, oraz nie aktualizuje mu
//sie wynik i wyswietla tylko pierwszo wartosc
#include<stdio.h>
float funkcja(float piersza, float druga);
int main(void)
{
	int cos;
	float piersza, druga, iloczyn, roznica, wynik;
	printf("podasz mi 2 liczby[dokoncz]\n");
	scanf("%f", &piersza);
	printf("teraz druga\n");
	cos = scanf("%f", &druga);
	printf("no to napierdalamy!\n");
	while(cos==1)
		{
		funkcja(piersza, druga);
		//printf("%f %f %f %f\n", piersza, druga, iloczyn, roznica);
		}		//dziala
	printf("konczymy program....\n");
	return 0;
}
float funkcja(float piersza, float druga)
{
	float  iloczyn, roznica, wynik;
	int cos;
	iloczyn = piersza * druga;
	roznica = piersza - druga;
	wynik = roznica / iloczyn;	//owy wynik sie nie wyswietla
	printf("%f o to kurwa wynik xD\n", wynik);
	printf("dawaj kolejne liczby lub (q)uit\n");
	cos = scanf("%f", &piersza);
	printf("nastepna!\n");
	scanf("%f", &druga);

}
