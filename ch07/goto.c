// file: goto.c

#include <stdio.h> 

int main(void)
{
	int count = 1;

 loop : //�̰��� ���̶��Ѵ�
	printf("%3d", count);
	if (++count <= 10)
		  goto loop; //���� �ִ°����ΰ��� ����

	printf("\n���α׷��� �����մϴ�.\n");

	return 0;
}
