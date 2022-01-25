#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//1008 - A/B ==================== 아직 해결 못 한 문제
//int main(void)
//{
//	float num1, num2, res;
//	scanf("%f %f", &num1, &num2);
//	res = num1 / num2;
//	printf("%.1f", res);
//
//	return 0;
//}

//시험성적
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
//조금 더 효율적인 코드를 짰어야 했음
//범위 설정 시, 90<=test<=100 이 아니라, test>=90 이런 식으로 짜서 알아서 걸러지도록, 시간 초과 넘지 않게!