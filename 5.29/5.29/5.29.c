#include<stdio.h>

int lcm(int a,int b);
int gcd(int c, int d);
int main()
{
	int x, y;
	printf("請輸入兩個數求最小公倍數:");
	scanf("%d %d", &x, &y);
	lcm(x, y);
	return 0;
}

int gcd(int a, int b) 
{
	if (a%b == 0)
		return b;
	else
		return gcd(b, a%b);
}

int lcm(int x, int y)
{
	int g = gcd(x, y);
	int total = (x / g) * (y / g) * g;
	printf("%d", total);
	return (x / g) * (y / g) * g;
}