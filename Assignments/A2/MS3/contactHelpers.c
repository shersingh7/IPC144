//==============================================
// Name:           Davinder Verma
// Student Number: 121802201
// Email:          dverma22@myseneca.ca
// Section:        NGG
// Date:           20/07/2020        
//==============================================
// Assignment:     2
// Milestone:      3
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        contents below...                        |
// +-------------------------------------------------+

#include <string.h>
#include <stdio.h>

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

    do
    {
        switch (menu())
        {
        case 1:

            printf("\n<<< Feature 1 is unavailable >>>\n\n");
            pause();

            break;

        case 2:

            printf("\n<<< Feature 2 is unavailable >>>\n\n");
            pause();

            break;

        case 3:

            printf("\n<<< Feature 3 is unavailable >>>\n\n");
            pause();

            break;

        case 4:

            printf("\n<<< Feature 4 is unavailable >>>\n\n");
            pause();

            break;

        case 5:

            printf("\n<<< Feature 5 is unavailable >>>\n\n");
            pause();

            break;

        case 6:

            printf("\n<<< Feature 6 is unavailable >>>\n\n");
            pause();

            break;

        case 0:

            printf("\nExit the program? (Y)es/(N)o: ");
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

    while (needInput == 1) 
    {
        scanf("%10s", phoneNum);
        clearKeyboard();

        // (String Length Function: validate entry of 10 characters)
        if (strlen(phoneNum) == 10)
        {
            needInput = 0;
        }
        else
        {
            printf("Enter a 10-digit phone number: ");
        }
    }
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
    return -1;
}


// displayContactHeader
// Put empty function definition below:



// displayContactFooter
// Put empty function definition below:



// displayContact:
// Put empty function definition below:



// displayContacts:
// Put empty function definition below:



// searchContacts:
// Put empty function definition below:



// addContact:
// Put empty function definition below:



// updateContact:
// Put empty function definition below:



// deleteContact:
// Put empty function definition below:



// sortContacts:
// Put empty function definition below:
