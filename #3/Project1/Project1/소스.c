#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0, i = 0, j = 1, q; //input : ����ڰ� �Է��ϴ� ��/ i,j : ���� �Ǻ���ġ������ ù��° ��, �ι�° ��/ q : �� ���� �� ���
	printf("plz enter a number :");
	scanf("%d", &input);
	if (input <= 0)
	{
		printf("plz enter a number(>=1):");
		scanf("%d", &input);
	}
	else {
		if (input = 1)
			printf("%d", i);
		else if (input = 2)
			printf("%d %d", i, j);
		else if (input = 3)
			printf("%d %d %d", i, j, i + j);
		else
		{
			while(input>=4)
		}
	}
}