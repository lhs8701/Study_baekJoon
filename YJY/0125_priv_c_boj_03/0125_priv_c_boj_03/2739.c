#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n,res;
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++)
	{
		res = n * i; //������ ��� ���� res�� ����
		             //res�� 4�� ����Ǽ� ��µǾ��� �ص� 2 * 3�� �� ���� res����
		printf("%d * %d = %d\n", n, i, res);
	}

	return 0;
}