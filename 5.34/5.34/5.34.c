#include<stdio.h>

int power(int x, int y);

int main()
{
	int a,b;
	printf("�п�J��ƩM����:");
	scanf("%d %d",&a, &b);
	if (b == 1)
		printf("���ƽФj��1");
	else
		power(a, b);
	return 0;
}

int power(int a, int b)
{
	int total=1;
	printf("power(%d,%d)=", a, b);
	for (int i = 1; i <= b; i++)
	{
		total = total * a;
		if (i == b)
			printf("%d", a);
		else
			printf("%d*",a);
	}
	return 0;
}
