#include<stdio.h>
#include<stdlib.h>

struct Student{
	
	int age; 
	char name[50];
	char gender[6];	
};


int main(){
	
char stdname[50];
int stdage;

struct Student student1;
struct Student student2;

printf("Enter a student's name: ");
scanf("%s",stdname);
printf("Enter a student's age: ");
scanf("%d", &stdage);

student1.age = stdage;
strcpy(student1.name, stdname);

printf("%s\n", student1.name);
printf("%d\n\n", student1.age);

printf("Enter another student's name: ");
scanf("%s",stdname);
printf("Enter another student's age: ");
scanf("%d", &stdage);

student2.age = stdage;
strcpy(student2.name, stdname);

printf("%s\n", student2.name);
printf("%d", student2.age);

}
	
