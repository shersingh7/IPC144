#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

struct Employee
{
	int id;
	int age;
	double salary;
};

int main(void)
{
	int option = 0, i=NULL , j=0,flag=0, empid=0,flag2=0;
	struct Employee emp[SIZE] = { {0} };

	printf("---=== EMPLOYEE DATA ===---\n");

	do
	{
		printf("\n1. Display Employee Information\n2. Add Employee\n3. Update Employee Salary\n4. Remove Employee.\n0. Exit\n\n");
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
				if (emp[i].id > 0)
				{
					printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
				}
				else
				{
					printf("");
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

		case 3:
			printf("Update Employee Salary\n");
			printf("======================\n");

			do
			{
				printf("\nEnter Employee ID: ");
				scanf("%d", &empid);

				for (i = 0; i < SIZE && flag2 == 0; i++)
				{
					
					if (empid == emp[i].id)
					{
						printf("The current salary is %.2lf\n", emp[i].salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &emp[i].salary);
						flag2 = 1;
					}
					
				}
				if (flag2==0)
				{
					printf("\n*** ERROR: Employee ID not found! ***\n");
				}
			} while (flag2 == 0);

		break;

		case 4:

			printf("\nRemove Employee\n");
			printf("===============\n");

			do
			{
				printf("\nEnter Employee ID: ");
				scanf("%d", &empid);

				for (i = 0; i < SIZE && flag2 == 0; i++)
				{

					if (empid == emp[i].id)
					{
						printf("Employee %d will be removed", emp[i].id);
						emp[i].id = 0;
						j--;
						flag2 = 1;
					}

				}
				if (flag2 == 0)
				{
					printf("\n*** ERROR: Employee ID not found! ***\n");
				}
			} while (flag2 == 0);

		break;

		default:
			printf("Invalid Entry\n");
			break;
		}

	} while (option != 0);

	return 0;
}