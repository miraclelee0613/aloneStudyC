#include <stdio.h>
// #include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char grade;						// ������ �Է��� ����
	char name[20];					// �̸��� �Է��� ����

	printf("���� �Է� : ");			//
	scanf("%c", &grade);			// grade ������ ���� ���� �Է�
	printf("�̸� �Է� : ");			//
	scanf("%s", name);				// name �迭�� �̸� ���ڿ� �Է�, &�� �Է����� �ʴ´�.
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}