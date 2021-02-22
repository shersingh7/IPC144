/* DIGITAL SIGNATURE(S):
   ====================

   List the student author(s) of this code below:

   Fullname                    Seneca Email Address
   --------------------------- ----------------------------
   1)Davinder Verma			   dverma22@myseneca.ca
   
   +--------------------------------------------------------+
   |                   FILE: menu_options.h                  |
   +--------------------------------------------------------+
   |           2  0  2  0  ~  S  U  M  M  E  R              |
   |                 I  P  C  :  B  T  P                    |
   |                 1  4  4  :  1  0  0                    |
   |              FINAL ASSESSMENT PART - 2                 |
   |                                                        |
   |     S  E  N  E  C  A            C  O  L  L  E  G  E    |
   +--------------------------------------------------------+ */

#include "file_helper.h"

void clearKeyboard(void);

int getInt(void);

int getIntInRange(int min, int max);

int menu(void);

void managerSystem(void);

char getCategory(const struct SkierInfo info[], int realSize);

void displayAgeGroup(int age);

void displayTime(double start, double finish, int withdrew);

void displayWithdrawn(int withdrawnStatus);

void sortInfo(struct SkierInfo info[], int realSize);

void displayInfo(struct SkierInfo info[], int realSize);

void displayTopThreeSkiers(struct SkierInfo info[], int realSize);

void displayLastThreeSkiers(struct SkierInfo info[], int realSize);

void displayWinners(struct SkierInfo info[], int realSize);
