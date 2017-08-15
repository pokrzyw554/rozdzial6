//procesor Popularny, prosty jak jebanie
#include<stdio.h>
int main(void)
{
	int week, counter, start, friends;
	printf("profesor popularny na portalu spolecznosciowym!\n");
	printf("zerknijmy jego znajomych w poszczegolnych tygodniach\n");
	printf("week freinds\n");
	printf("%2d %3d\n", week, friends);
	for(start = 5, friends = start, week=1; friends<=150; week++)
		{
		printf("%2d %3d\n", week, friends);
		friends -= week;
		friends *= 2;
		}
	printf("%2d %3d\n", week, friends);
	printf("i potem zyli dugo i szesliwie!\n");
	return 0;
}
