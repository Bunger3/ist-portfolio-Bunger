#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("What is your age?\n");
		scanf("%i", &age);
	
	printf("What is your gpa?\n");
		scanf(" %f", &gpa);

	printf("What is your grade?\n");
		scanf(" %c", &grade);

	printf("Your age is %i\n", age);
	printf("Your gpa is %f\n", gpa);
	printf("Your grade is %c\n", grade);
	
	return 0;
}
