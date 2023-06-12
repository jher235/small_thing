#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5


struct student {
	int number;
	char name[10];
	float grade;
	struct date *dt;
};
struct date {
	int day;
	float time;
	int start;
};

int check(struct student a, struct student b);

int main(void) {
	struct student li[2];
	struct date dt1, dt2;//메모리 공간할당
	li[0].dt = &dt1; // , 주소 저장
	li[1].dt = &dt2;

	for (int i = 0; i < 2; i++) {
		printf("번호입력:");
		scanf("%d", &li[i].number);
		printf("이름 입력:");
		scanf("%s", li[i].name);
		printf("성적 입력:");
		scanf("%f", &li[i].grade);
		printf("시작일 입력:");
		scanf("%d", &li[i].dt->start);		//&(*li[i].dt).start)
	}


	if (check(li[0], li[1]) ==1 )
		printf("동일한 사람입니다\n");

	return 0;
}



int check(struct student a, struct student b) {
	
	if (strcmp(a.name, b.name))
		return -1;
	if (a.number != b.number)
		return -1;
	if (a.dt->start != b.dt->start)
		return -1;
	if (a.grade != b.grade)
		return -1;

	return 1;
}
