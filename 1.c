#include<stdio.h>

int main() {
	double a;
	printf("������ �Է��ϼ���");
	scanf_s("%lf", &a);
	printf("���ڴ� %lf�Դϴ�\n", a * 0.05);

	double b;
	printf("��ȭ��  �Է��ϼ���");
	scanf_s("%lf", &b);
	printf("���ڴ� %lf�Դϴ�\n", b * 10);

	double c;
	printf("�޷���  �Է��ϼ���");
	scanf_s("%lf", &c);
	printf("���ڴ� %lf�Դϴ�\n", c * 1200);

	double i, e;
	printf("���ο� ���θ�  �Է��ϼ���");
	scanf_s("%lf %lf", &i, &e); // " % lf"" % lf" ���̿� �޸� ���� ����
	printf("������ %lf�Դϴ�\n", i * e);

	double k, h;
	printf("�Ÿ��� �ð���  �Է��ϼ���");
	scanf_s("%lf %lf", &k, &h);
	printf("��ռӵ��� %lf�Դϴ�\n", k / h);

	double r, p;
	printf("�������� ���̸�  �Է��ϼ���");
	scanf_s("%lf %lf", &r, &p);
	printf("���Ǵ� %lf�Դϴ�\n", r * r * 3.14 * p);


	return 0;
}
