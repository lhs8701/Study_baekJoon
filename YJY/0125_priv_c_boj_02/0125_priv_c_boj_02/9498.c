#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//1008 - A/B ==================== ���� �ذ� �� �� ����
//int main(void)
//{
//	float num1, num2, res;
//	scanf("%f %f", &num1, &num2);
//	res = num1 / num2;
//	printf("%.1f", res);
//
//	return 0;
//}

//���輺��
int main(void)
{
	int test;
	scanf("%d", &test);

	if (test >= 90)
	{
		printf("A");
	}
	else if (test >= 80)
	{
		printf("B");
	}
	else if (test >= 70)
	{
		printf("C");
	}
	else if (test >= 60)
	{
		printf("D");
	}
	else 
	{
		printf("F");
	}

	return 0;
}
//���� �� ȿ������ �ڵ带 ®��� ����
//���� ���� ��, 90<=test<=100 �� �ƴ϶�, test>=90 �̷� ������ ¥�� �˾Ƽ� �ɷ�������, �ð� �ʰ� ���� �ʰ�!