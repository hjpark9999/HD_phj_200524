#include <stdio.h>
#include "Main.h"

void main()
{
	int inwon=0,n;
	STD std[10]; // �л��ο�

	while (1)
	{
		printf("����ǥ ���α׷�\n\n");
		printf("1. ����ǥ �Է�\n");
		printf("2. ����ǥ ���\n");
		printf("9. ���α׷� ����\n");
		printf("���� ��ȣ�� �Է��Ͽ� �۾����ּ���.\n");

		scanf_s("%d", &n);

		switch (n)
		{
		case 1:
			if (inwon == 10) 
			{
				printf("�� �̻� �Է��� �� �����ϴ�.\n");
				break;
			}
			readjumsu(&std[inwon++]); // ����ǥ �Է�
			break;

		case 2: 
			if (inwon == 0)
			{
				printf("����ǥ�� ����ֽ��ϴ�.\n");
				break;
			}
			printjumsu(std, inwon); // ����ǥ ���
			break;
		case 9:
			return;


		default:
			printf("�� �� �Է� �Ǿ����ϴ�.\n");
		}
	}
	fgetc(stdin);
}

// ����ǥ �Է� �Լ�
void readjumsu(STD* std) 
{
	printf("�̸��� �Է��ϼ���: ");
	scanf_s("%s", std->name, 10);
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &std->kor);
}

// ����ǥ ��� �Լ�
void printjumsu(STD *std, int inwon)
{
	for (int i = 0; i < inwon; i++)
	{
		printf("%s : %d\n", std[i].name, std[i].kor);
	}
}