#include<stdio.h>
void example_1(int n, char A, char B, char C) {
	if (n == 1) {
		printf("%c ¡÷ %c\n", A, C);
	}
	else {
		example_1(n - 1, A, C, B);
		printf("%c ¡÷ %c\n", A, C);
		example_1(n - 1, B, A, C);
	}
}
int main() {
	int n;
	printf("½Ð¿é¤Jn:");
	scanf("%d", &n);
	example_1(n, '1', '2', '3');
	return 0;
}