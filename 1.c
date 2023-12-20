#include<stdio.h>

int main() {
	double a;
	printf("원금을 입력하세요");
	scanf_s("%lf", &a);
	printf("이자는 %lf입니다\n", a * 0.05);

	double b;
	printf("엔화를  입력하세요");
	scanf_s("%lf", &b);
	printf("이자는 %lf입니다\n", b * 10);

	double c;
	printf("달러를  입력하세요");
	scanf_s("%lf", &c);
	printf("이자는 %lf입니다\n", c * 1200);

	double i, e;
	printf("가로와 세로를  입력하세요");
	scanf_s("%lf %lf", &i, &e); // " % lf"" % lf" 사이에 콤마 쓰지 말기
	printf("면적은 %lf입니다\n", i * e);

	double k, h;
	printf("거리와 시간을  입력하세요");
	scanf_s("%lf %lf", &k, &h);
	printf("평균속도는 %lf입니다\n", k / h);

	double r, p;
	printf("반지름과 높이를  입력하세요");
	scanf_s("%lf %lf", &r, &p);
	printf("부피는 %lf입니다\n", r * r * 3.14 * p);


	return 0;
}
