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
	struct date dt1, dt2;//�޸� �����Ҵ�
	li[0].dt = &dt1; // , �ּ� ����
	li[1].dt = &dt2;

	for (int i = 0; i < 2; i++) {
		printf("��ȣ�Է�:");
		scanf("%d", &li[i].number);
		printf("�̸� �Է�:");
		scanf("%s", li[i].name);
		printf("���� �Է�:");
		scanf("%f", &li[i].grade);
		printf("������ �Է�:");
		scanf("%d", &li[i].dt->start);		//&(*li[i].dt).start)
	}


	if (check(li[0], li[1]) ==1 )
		printf("������ ����Դϴ�\n");

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
