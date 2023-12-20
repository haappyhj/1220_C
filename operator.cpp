#include<stdio.h>

int main() {

	//printf("%d\n", 1 + 3); //덧셈 연산자
	//printf("%d\n", 1 - 3);
	//printf("%d\n", 1 * 3);
	//printf("%d\n", 1 / 3); // 나눗셈
	//printf("%d\n", 1 % 3); //나머지

	////대입연산자 
	//int a = 100;
	//a = 200;
	////a = a + 300;
	//a += 300;


	//int b = 100;
	////b = b - 50;
	//b -= 50;

	//int c = 10;
	////c = c * 10;
	//c *= 10;

	//printf("a:%d, b:%d, c:%d", a, b, c);

	//비교 연산자
	//>=,<+,==(같다), !=(다르다)
	//c언어에서 참은 1, 거짓은 0을 나타낸다.

	printf("%d", 3 > 1);
	printf("3>1:%d\n", 3 > 1 );

	//논리연산자
	//&&(and), ||(or), !(not)
	int a = 10;
	int b = 5;
	int c = 3;

	// &&특징은 모두 참이어야만 참이 나온다.
	printf("result:%d\n", a > b && b > c);

	//||의 특징은 하나라도 참이면 참이 나온다
	printf("result:%d\n", a < b || b<c || a>c);

	//not의 특징은 반대 결과값
	printf("result:%d\n", !(a > b));



	return 0;
}