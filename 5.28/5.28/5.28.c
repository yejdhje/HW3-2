#include<stdio.h>
int main()
{
	char ch;
	printf("請輸入大寫英文字母: \n");
	ch = getchar();
	ch = ch + 32;
	if (ch > 122 || ch < 97)
		printf("你輸入錯了");
	else
		printf("小寫字母為:%c", ch);
	return 0;
}
