//A+N-3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t, n1, n2, sum;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &n1, &n2);
		printf("%d\n", n1 + n2); //출력 시에 굳이 한 번에 쫙 나오는 게 아니어도 됐었음
	}

	return 0;
}