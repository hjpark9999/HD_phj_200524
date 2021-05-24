#include <stdio.h>
#include "Main.h"

void main()
{
	int inwon=0,n;
	STD std[10]; // 학생인원

	while (1)
	{
		printf("성적표 프로그램\n\n");
		printf("1. 성적표 입력\n");
		printf("2. 성적표 출력\n");
		printf("9. 프로그램 종료\n");
		printf("다음 번호를 입력하여 작업해주세요.\n");

		scanf_s("%d", &n);

		switch (n)
		{
		case 1:
			if (inwon == 10) 
			{
				printf("더 이상 입력할 수 없습니다.\n");
				break;
			}
			readjumsu(&std[inwon++]); // 성적표 입력
			break;

		case 2: 
			if (inwon == 0)
			{
				printf("성적표가 비어있습니다.\n");
				break;
			}
			printjumsu(std, inwon); // 성적표 출력
			break;
		case 9:
			return;


		default:
			printf("잘 못 입력 되었습니다.\n");
		}
	}
	fgetc(stdin);
}

// 성적표 입력 함수
void readjumsu(STD* std) 
{
	printf("이름을 입력하세요: ");
	scanf_s("%s", std->name, 10);
	printf("점수를 입력하세요: ");
	scanf_s("%d", &std->kor);
}

// 성적표 출력 함수
void printjumsu(STD *std, int inwon)
{
	for (int i = 0; i < inwon; i++)
	{
		printf("%s : %d\n", std[i].name, std[i].kor);
	}
}