#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0, i = 0, j = 1, q; //input : 사용자가 입력하는 수/ i,j : 각각 피보나치수열의 첫번째 수, 두번째 수/ q : 합 구할 때 사용
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