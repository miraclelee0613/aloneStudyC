#include <stdio.h>

int main(void)
{
	int kor = 70, eng = 80, mat = 90;	// ���� ����
	double tot;							// ���� ����
	double avr;							// ��� ����

	tot = kor + eng;
	tot = tot + mat;
	avr = tot / 3;

	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);		// ���� ����
	printf("���� : %0.2lf\n", tot);									// ����
	printf("��� : %0.2lf\n", avr);									// ���� - ���

	return 0;
}