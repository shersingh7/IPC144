//==============================================
// Name:           Davinder Verma
// Student Number: 121802201
// Email:          dverma22@myseneca.ca
// Section:        NGG
// Date:           21/07/2020
//==============================================
// Assignment:     2
// Milestone:      4
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        contents below...                        |
// +-------------------------------------------------+

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define MAXCONTACTS 5

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n'); // empty execution code block on purpose
}

// pause: Empty function definition goes here:
void pause(void)
{
    printf("(Press Enter to Continue)");
    clearKeyboard();
}


// getInt: Empty function definition goes here:
int getInt(void)
{
    int input = 0;
    char terminator = 'x';

    while (terminator != '\n')
    {
        scanf("%d%c", &input, &terminator);
        
        if (terminator != '\n')
        {
            clearKeyboard();
            printf("*** INVALID INTEGER *** <Please enter an integer>: ");
        }

    }

    return input;
}


// getIntInRange: Empty function definition goes here:
int getIntInRange(int min, int max)
{
    int range = 0;

    do
    {
        range = getInt();

        if (range > max || range < min)
        {
            printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
        }


    } while (range > max || range < min);

    printf("\n");

    return range;

}


// yes: Empty function definition goes here:
int yes(void)
{
    char yn;
    char terminator = 'x';
    int yesno = 0;

    scanf("%c%c", &yn, &terminator);

    if (terminator != '\n')
    {
        clearKeyboard();
    }

    while ((yn != 'y' && yn != 'Y' && yn != 'n' && yn != 'N') || (terminator != '\n'))
    {
        printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
        scanf("%c%c", &yn, &terminator);

        if (terminator != '\n')
        {
            clearKeyboard();
        }
    }

    if (yn == 'y' || yn == 'Y')
    {
        yesno = 1;
    }

    return yesno;
}


// menu: Empty function definition goes here:
int menu(void)
{

    printf("Contact Management System\n");
    printf("-------------------------\n");
    printf("1. Display contacts\n");
    printf("2. Add a contact\n");
    printf("3. Update a contact\n");
    printf("4. Delete a contact\n");
    printf("5. Search contacts by cell phone number\n");
    printf("6. Sort contacts by cell phone number\n");
    printf("0. Exit\n\n");
    printf("Select an option:> ");

    return getIntInRange(0, 6);
}


// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void)
{
    int flag = 0;

    struct Contact contacts[MAXCONTACTS] =
	{ { { "Rick", {'\0'}, "Grimes" },
		{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
		{ "4161112222", "4162223333", "4163334444" } },
	  {
		{ "Maggie", "R.", "Greene" },
		{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		{ "9051112222", "9052223333", "9053334444" } },
	  {
		{ "Morgan", "A.", "Jones" },
		{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
		{ "7051112222", "7052223333", "7053334444" } },
	  {
		{ "Sasha", {'\0'}, "Williams" },
		{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		{ "9052223333", "9052223333", "9054445555" } },
	};

    do
    {
        switch (menu())
        {
        case 1:

            displayContacts(contacts, MAXCONTACTS);
            pause();

            break;

        case 2:

            addContact(contacts, MAXCONTACTS);
            pause();

            break;

        case 3:

            updateContact(contacts, MAXCONTACTS);
            pause();

            break;

        case 4:

            deleteContact(contacts, MAXCONTACTS);
            printf("\n");
            pause();

            break;

        case 5:

            searchContacts(contacts, MAXCONTACTS);
            pause();

            break;

        case 6:

            sortContacts(contacts, MAXCONTACTS);
            pause();

            break;

        case 0:

            printf("Exit the program? (Y)es/(N)o: ");
            flag = yes();

            if (flag == 1)
            {
                printf("\nContact Management System: terminated");
            }

            break;

        default:
            break;

        }
        printf("\n");

    } while (flag != 1);

}






// +-------------------------------------------------+
// |                                                 |
// |                    N E W                        |
// |           S T U F F     G O E S                 |
// |                  B E L O W                      |
// |                                                 |
// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10-digit chars entered)
// ---------------------------------------------------------------------------------
// NOTE: Modify this function to validate only numeric character digits are entered
// ---------------------------------------------------------------------------------
void getTenDigitPhone(char phoneNum[])
{
    int needInput = 1;
    int i=NULL;
    int flag = 0;
    
    while (needInput == 1)
    {
        flag = 1;

        scanf("%10s", phoneNum);
        clearKeyboard();

        // (String Length Function: validate entry of 10 characters)
        if (strlen(phoneNum) == 10)
        {
            needInput = 0;

            for (i = 0; i < 10 && flag; i++)
            {
                flag = isdigit(phoneNum[i]);
            }
        }
        if(!flag||needInput==1)
        {
            printf("Enter a 10-digit phone number: ");
            needInput = 1;
        }
    }
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
    int i=NULL;
    int index = -1;

    for (i = 0; i < size && index < 0; i++)
    {
        if (strcmp(contacts[i].numbers.cell, cellNum) == 0)
        {
            index = i;
        }
    }

    return index;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader(void)
{

    printf("+-----------------------------------------------------------------------------+\n");
    printf("|                              Contacts Listing                               |\n");
    printf("+-----------------------------------------------------------------------------+\n");

}



// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int count)
{
    printf("+-----------------------------------------------------------------------------+\n");
    printf("Total contacts: %d\n\n", count);

}



// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact* contact)
{
    if (strlen(contact->name.middleInitial) == 0)
    {
        printf(" %s %s\n", contact->name.firstName, contact->name.lastName);
    }
    else
    {
        printf(" %s %s %s\n", contact->name.firstName, contact->name.middleInitial, contact->name.lastName);
    }

    printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);

    printf("       %d %s, ", contact->address.streetNumber, contact->address.street);

    if (contact->address.apartmentNumber > 0)
    {
        printf("Apt# %d, ", contact->address.apartmentNumber);
    }

    printf("%s, %s\n", contact->address.city, contact->address.postalCode);
}



// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact contacts[], int size)
{
    int i = NULL;
    int count = 0;

    displayContactHeader();

    for (i = 0; i < size; i++)
    {
        if (strlen(contacts[i].numbers.cell) > 0)
        {
            displayContact(&contacts[i]);
            count++;
        }
    }

    displayContactFooter(count);
}



// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact contacts[], int size)
{
    char num[11];
    int asize = 0;

    printf("Enter the cell number for the contact: ");
    getTenDigitPhone(num);

    asize = findContactIndex(contacts, size, num);

    if (asize != -1)
    {
        printf("\n");
        displayContact(&contacts[asize]);
        printf("\n");
    }
    else
    {
        printf("*** Contact NOT FOUND ***\n\n");
    }
}



// addContact:
// Put empty function definition below:
void addContact(struct Contact contacts[], int size)
{
    int asize = findContactIndex(contacts, size, "\0");

    if (asize == -1)
    {
        printf("*** ERROR: The contact list is full! ***\n\n");
    }
    else
    {
        getContact(&contacts[asize]);
        printf("--- New contact added! ---\n\n");
    }
}



// updateContact:
// Put empty function definition below:
void updateContact(struct Contact contacts[], int size)
{
    char num[11];
    int asize=NULL;

    printf("Enter the cell number for the contact: ");
    getTenDigitPhone(num);
    asize = findContactIndex(contacts, size, num);

    if (asize == -1)
    {
        printf("*** Contact NOT FOUND ***\n\n");
    }
    else
	{
		printf("\n");
		printf("Contact found:\n");
		displayContact(&contacts[asize]);
		printf("\n");

		printf("Do you want to update the name? (y or n): ");

		if (yes())
		{
			getName(&contacts[asize].name);
		}
		printf("Do you want to update the address? (y or n): ");

		if (yes())
		{
			getAddress(&contacts[asize].address);
		}

		printf("Do you want to update the numbers? (y or n): ");

		if (yes())
		{
			getNumbers(&contacts[asize].numbers);
		}

		printf("--- Contact Updated! ---\n\n");
	}

}



// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact contacts[], int size)
{
    char num[11];
    int asize=NULL;

    printf("Enter the cell number for the contact: ");
    getTenDigitPhone(num);

    asize = findContactIndex(contacts, size, num);

    if (asize == -1)
    {
        printf("*** Contact NOT FOUND ***\n");
    }
    else
    {
        printf("\n");
        printf("Contact found:\n");
        displayContact(&contacts[asize]);
        printf("\n");
        printf("CONFIRM: Delete this contact? (y or n): ");

        if (yes())
        {
            contacts[asize].numbers.cell[0] = '\0';
            printf("--- Contact deleted! ---\n");
        }
    }
}



// sortContacts:
// Put empty function definition below:
void sortContacts(struct Contact contacts[], int size)
{
    struct Contact temp;
    int i = NULL, j = NULL;

        for (i = size - 1; i > 0; i--)
        {
            for (j = 0; j < i; j++)
            {
                if (strcmp(contacts[j].numbers.cell, contacts[j + 1].numbers.cell) > 0)
                {
                    temp = contacts[j];
                    contacts[j] = contacts[j + 1];
                    contacts[j + 1] = temp;

                }
            }
        }
           
        

        printf("--- Contacts sorted! ---\n\n");

}
