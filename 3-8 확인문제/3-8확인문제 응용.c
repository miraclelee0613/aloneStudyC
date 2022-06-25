#include <stdio.h>

int main(void)
{
	int kor = 70, eng = 80, mat = 90;	// 점수 선언
	double tot;							// 총점 선언
	double avr;							// 평균 선언

	tot = kor + eng;
	tot = tot + mat;
	avr = tot / 3;

	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);		// 점수 기입
	printf("총점 : %0.2lf\n", tot);									// 총점
	printf("평균 : %0.2lf\n", avr);									// 응용 - 평균

	return 0;
}