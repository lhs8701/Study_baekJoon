#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//0124
//10171-고양이출력문제 -> 띄어쓰기 잘하고 백슬래시 잘 쓸 것
int main() {
	printf("\\    /\\\n");
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|");

	return 0;
}

//10172-개 출력 -> 따옴표 출력하려면 \" 붙여야함, 하나하나 붙이고 막판에 "붙여야 함. \"하나가 "하나 출력하는 거임 
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

//1000 - A+B -> 입력받는 경우, 그냥 합계 출력할 때 계산식이 적히는 경우, 초기화 필요 x
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

//10430 - 나머지
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

//2588 - 곱셈
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