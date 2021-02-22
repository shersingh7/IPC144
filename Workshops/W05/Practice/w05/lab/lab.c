#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 2

struct Employee
{
	int id;
	int age;
	double salary;
};

int main(void)
{
	int option = 0, i=NULL,j=0,flag=0;
	struct Employee emp[SIZE] = { {0} };
	
	printf("---=== EMPLOYEE DATA ===---\n");

	do
	{
		printf("\n1. Display Employee Information\n2. Add Employee\n0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);

		switch (option)
		{
		case 0:
		
			printf("\nExiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1: 

			printf("\nEMP ID  EMP AGE	EMP SALARY\n");
			printf("======  ======= ==========\n");
			
			for (i = 0; i < SIZE; i++)
			{
				if(emp[i].id>0)
				{
					printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
				}
				
			}
			break;

		case 2:

			printf("\nAdding Employee\n");
			printf("===============\n");

			if (j < SIZE)
			{
				for (i= 0; i < SIZE; i++)
				{
					if(emp[i].id==0)
					{
						printf("Enter Employee ID: ");
						scanf("%d", &emp[i].id);
						printf("Enter Employee Age: ");
						scanf("%d", &emp[i].age);
						printf("Enter Employee Salary : ");
						scanf("%lf", &emp[i].salary);
						j++;
						break;
					}

					
				}
				
			}
			else
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}
						
			break;
			
		default:
			printf("Invalid Entry\n");
			break;
		}

	} while (option != 0);

	return 0;
}