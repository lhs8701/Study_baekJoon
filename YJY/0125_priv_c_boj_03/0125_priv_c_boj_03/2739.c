#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n,res;
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++)
	{
		res = n * i; //어차피 계속 새로 res가 생김
		             //res에 4가 저장되서 출력되었다 해도 2 * 3이 그 다음 res값임
		printf("%d * %d = %d\n", n, i, res);
	}

	return 0;
}