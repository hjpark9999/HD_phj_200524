#ifndef __Main_H__
#define __Main_H__


typedef struct student {
	char name[10];
	int kor;
} STD;	//구조체 빌딩

void readjumsu(STD*); // 성적표 입력
void printjumsu(STD* , int ); // 성적표 출력


#endif
