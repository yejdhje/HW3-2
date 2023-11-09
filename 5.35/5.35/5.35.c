#include <stdio.h>

unsigned long long int f(unsigned int a);

int main()
{
	unsigned int c;
	printf("請輸入你要的第幾個費式數列:");
	scanf("%u", &c);
	printf("%u", f(c));

	return 0;
}

unsigned long long int f(unsigned int a)
{
	unsigned int x=0, y=1, z;
	if (a > 2)
	{
		for (unsigned int i = 3; i <= a; i++)
		{
			z = x + y;
			x = y;
			y = z;
		}
		return z;
	}
	else if (a == 2)
		return y;
	else
		return x;

	
}