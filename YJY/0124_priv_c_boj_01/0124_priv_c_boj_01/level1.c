#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//0124
//10171-�������¹��� -> ���� ���ϰ� �齽���� �� �� ��
int main() {
	printf("\\    /\\\n");
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|");

	return 0;
}

//10172-�� ��� -> ����ǥ ����Ϸ��� \" �ٿ�����, �ϳ��ϳ� ���̰� ���ǿ� "�ٿ��� ��. \"�ϳ��� "�ϳ� ����ϴ� ���� 
int main()
{
	printf("|\\_/|\n");
	printf("|q p|   /}\n");
    //printf("( 0 )\"""\"\""\"\\\n");
	printf("( 0 )\"\"\"\\\n");
	printf("|\"^\"`    |\n");
	printf("||_/=\\\\__|\n");

	return 0;
}

//1000 - A+B -> �Է¹޴� ���, �׳� �հ� ����� �� ������ ������ ���, �ʱ�ȭ �ʿ� x
int main(void)
{
	int num1, num2, sum;
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("%d", sum);
}

//1001 - A-B
int main(void)
{
	int num1, num2, res;
	scanf("%d %d", &num1, &num2);
	res = num1 - num2;
	printf("%d", res);

	return 0;
}

//10998 - A*B
int main(void)
{
	int num1, num2, res;
	scanf("%d %d", &num1, &num2);
	res = num1 * num2;
	printf("%d", res);

	return 0;
}

//0124,0125
//1008 - A/B ====================
int main(void)
{
	float num1, num2, res;
	scanf("%f %f", &num1, &num2);
	res = num1 / num2;
	printf("%.1f", res);

	return 0;
}

//10430 - ������
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int fir = (a + b) % c;
	int sec = ((a % c) + (b % c)) % c;
	int thr = (a * b) % c;
	int four = ((a % c) * (b % c)) % c;

	printf("%d\n%d\n%d\n%d\n", fir, sec, thr, four);

	return 0;
}

//2588 - ����
int main(void)
{
	int num1, num2;
	scanf("%d\n%d", &num1, &num2);

	int a = num2 / 100;
	int b = (num2 - 100 * a) / 10;
	int c = (num2 - 100 * a - 10 * b) / 1;

	int thr = num1 * c;
	int four = num1 * b;
	int fif = num1 * a;
	int res = thr + four *10 + fif*100;

	printf("%d\n%d\n%d\n%d", thr, four, fif, res);

	return 0;
}