#include<stdio.h>
void main()
{
	int t=0;
	printf("输入年份：");
		scanf_s("%d", &t);
	if (t%400==0||t % 4 == 0 && t % 100 != 0)
		printf("%d是闰年\n", t);
	else
		printf("%d不是闰年\n", t) ;
}
