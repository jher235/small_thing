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

void change(struct student *a, struct student *b);

int main(void) {
	
	struct student li[2];
	struct date d[2];
	li[0].dt = &d[0];
	li[1].dt = &d[1];

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


	change(&li[0],&li[1]);

	for (int i = 0; i < 2; i++)
		printf("%d��° %3d %3s %3f %3d\n", i, li[i].number, li[i].name, li[i].grade, li[i].dt->start);

	return 0;
}



void change(struct student *a, struct student *b) {
	

	strcpy((*a).name, "�ٲ�");
	a->grade = 0;
	a->number = 0;
	a->dt->start = 0;

	


	
}
