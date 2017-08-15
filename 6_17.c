//jim szczesciarz -> pierdolony farciarski skurwiel!!
#include<stdio.h>
int main(void)
{
	int lokata, counter;
	float procent, hajsy;

	printf("jim szczesciarz wygral milooon pieniedzy!\n");
	printf("przeanalizujmy jego upadek\n");
	hajsy = 1000000;
	printf("rok hajsy\n");
	for(counter=1; hajsy>0;counter++,hajsy*=1.08 ,hajsy -= 100000)
		printf("%3d %6.2f\n", counter, hajsy);
	printf("i tak o to jimi stoczyl sie po %d latach\n", counter);
	return 0;
}
