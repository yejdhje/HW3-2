#include<stdio.h>
int main()
{
	char ch;
	printf("�п�J�j�g�^��r��: \n");
	ch = getchar();
	ch = ch + 32;
	if (ch > 122 || ch < 97)
		printf("�A��J���F");
	else
		printf("�p�g�r����:%c", ch);
	return 0;
}
