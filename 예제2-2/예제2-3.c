#include <stdio.h>			// stdio : standard input output(ǥ�������)�� ���Ӹ�

int main(void)
{
	printf("Be happy\n");					// "Be happy"�� ����ϰ� ���� �ٲ�(\n)
	printf("12345678901234567890\n");		// ȭ�鿡 �� ��ȣ ����ϰ� ���� �ٲ�(\n)
	printf("My\tfriend\n");
	// "My"�� ����ϰ� �� ��ġ�� �̵�(\t) �Ŀ� "friend"�� ����ϰ� ���� �ٲ�(\n)
	printf("Goot\bd\tchance\n");			// "Goot"�� ����ϰ� �� ĭ �������� �̵�(\b)��
	// t�� d�� �ٲٰ� �� ��ġ�� �̵�(\t) �Ŀ� "chance"�� ����ϰ� ���� �ٲ�(\n)

	return 0;
}