#include <stdio.h>

typedef struct{
	char name[20];
	int eng;
	int maths;
}Student;

int main(void){
	Student st[5]= {
		{"st1", 10, 20},
		{"st2", 30, 40},
		{"st3", 50, 60},
		{"st4", 90, 100},
		{"st5", 90, 100},
	};
	int max = 0;
	int i;
	for(i = 0; i < 5; i++){
		Student sti = st[i];
		int	sum = sti.maths + sti.eng;
		if(sum > max){
			max = sum;
		}
	}
	printf("tong diem lon nhat la: %d", max);
	for(i = 0; i < 5; i++){
		Student sti = st[i];
		int sum = sti.maths + sti.eng;
		if(sum == max){
			printf("\n\nthong tin cua sinh vien la: ");
			printf("\nname: %s", sti.name);
			printf("\neng: %d", sti.eng);
			printf("\nmaths: %d", sti.maths);
		}
	}
	printf("\nthong tin cua vien sau khi tang diem tieng anh la: ");
	for(i = 0; i < 5; i++){
		st[i].eng += 30;
		if(st[i].eng > 100){
			st[i].eng = 100;
		}
		printf("\n\nname: %s", st[i].name);
		printf("\n\neng: %d", st[i].eng);
	}
	max = 0;
	for(i = 0; i < 5; i++){
		if(st[i].eng > max){
			max = st[i].eng;
		}
	}
	printf("\n\ntong diem tieng anh lon nhat sau khi cong la: %d", max);
	for(i = 0; i < 5; i++){
		if(st[i].eng == max){
			printf("\n\nname: %s", st[i].name);
			printf("\nmaximum Engligh: %d", st[i].eng);
		}
	}
}                                                                                                                                                                                                                                                                             
